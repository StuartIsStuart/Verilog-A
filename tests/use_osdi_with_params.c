// run_osdi_with_voltages.c
// Compile: gcc -std=c11 -O2 -Wall -o run_osdi_with_voltages run_osdi_with_voltages.c -ldl
// Usage: ./run_osdi_with_voltages ./test1.osdi [Va] [Vb]
// Defaults: Va=1.0 V, Vb=0.0 V

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <dlfcn.h>
#include <stdint.h>
#include "osdi.h"

static int find_node_index(OsdiDescriptor *d, const char *name) {
    if (!d->nodes || !name) return -1;
    for (uint32_t i = 0; i < d->num_nodes; ++i) {
        if (d->nodes[i].name && strcmp(d->nodes[i].name, name) == 0) return (int)i;
    }
    return -1;
}

int main(int argc, char **argv) {
    if (argc < 2) {
        fprintf(stderr, "usage: %s ./model.osdi [Va] [Vb]\n", argv[0]);
        return 1;
    }
    const char *libpath = argv[1];
    double Va = 1.0, Vb = 0.0;
    if (argc >= 3) Va = atof(argv[2]);
    if (argc >= 4) Vb = atof(argv[3]);

    void *h = dlopen(libpath, RTLD_NOW | RTLD_LOCAL);
    if (!h) { fprintf(stderr, "dlopen failed: %s\n", dlerror()); return 1; }

    OsdiDescriptor *descs = (OsdiDescriptor *) dlsym(h, "OSDI_DESCRIPTORS");
    uint32_t *num_desc = (uint32_t *) dlsym(h, "OSDI_NUM_DESCRIPTORS");
    if (!descs || !num_desc) { fprintf(stderr,"missing OSDI symbols\n"); dlclose(h); return 1; }

    OsdiDescriptor *desc = &descs[0];
    printf("Model: %s\n", desc->name ?: "<unknown>");
    printf(" num_nodes=%u, num_terminals=%u, num_jacobian_entries=%u\n model_size=%u, instance_size=%u, jacobian_ptr_resist_offset=%u\n",
           desc->num_nodes, desc->num_terminals, desc->num_jacobian_entries, desc->model_size, desc->instance_size, desc->jacobian_ptr_resist_offset);

    uint32_t J = desc->num_resistive_jacobian_entries ? desc->num_resistive_jacobian_entries : desc->num_jacobian_entries;
    printf("Using J = %u\n", J);

    // allocate model and instance memory
    void *model = calloc(1, desc->model_size);
    void *inst  = calloc(1, desc->instance_size);
    if (!model || !inst) { perror("calloc"); return 1; }

    // setup model/instance (no param overrides here; you can add if needed)
    OsdiSimParas paras; memset(&paras,0,sizeof(paras));
    OsdiInitInfo init; memset(&init,0,sizeof(init));
    if (desc->setup_model) desc->setup_model(NULL, model, &paras, &init);
    if (desc->setup_instance) desc->setup_instance(NULL, inst, model, 300.0, desc->num_terminals, &paras, &init);

    // prepare prev_solve (node voltages) and set Va/Vb
    double *prev_solve = calloc(desc->num_nodes, sizeof(double));
    if (!prev_solve) { perror("calloc prev_solve"); return 1; }

    int idx_a = find_node_index(desc, "a");
    int idx_b = find_node_index(desc, "b");
    if (idx_a < 0) idx_a = 0;
    if (idx_b < 0) idx_b = 1;
    if ((size_t)idx_a >= desc->num_nodes || (size_t)idx_b >= desc->num_nodes) {
        fprintf(stderr, "Node indices out of range (num_nodes=%u). Aborting.\n", desc->num_nodes);
        return 1;
    }
    prev_solve[idx_a] = Va;
    prev_solve[idx_b] = Vb;
    printf("Setting initial voltages: node %d ('a') = %g V, node %d ('b') = %g V\n", idx_a, Va, idx_b, Vb);

    // prepare jacobian storage (contiguous array-of-double* at jacobian_ptr_resist_offset if possible)
    double *jac_values = NULL;
    if (J > 0) {
        jac_values = calloc(J, sizeof(double));
        if (!jac_values) { perror("calloc jac_values"); return 1; }
        size_t offset = (size_t)desc->jacobian_ptr_resist_offset;
        size_t need_array = (size_t)J * sizeof(double*);
        if (offset + need_array <= desc->instance_size) {
            double **local_ptrs = calloc(J, sizeof(double*));
            if (!local_ptrs) { perror("calloc local_ptrs"); return 1; }
            for (uint32_t i=0;i<J;i++) local_ptrs[i] = &jac_values[i];
            memcpy((char*)inst + offset, local_ptrs, need_array);
            free(local_ptrs);
            printf("Wrote contiguous array-of-%u double* at instance+%zu\n", J, offset);
        } else {
            size_t need_single = sizeof(void*);
            if (offset + need_single <= desc->instance_size) {
                double **slot = (double**)((char*)inst + offset);
                *slot = jac_values;
                printf("Wrote single double* at instance+%zu pointing to jac_values\n", offset);
            } else {
                fprintf(stderr, "Cannot place jacobian pointer(s) in instance memory\n");
            }
        }
    }

    // prepare siminfo and attach prev_solve BEFORE eval
    OsdiSimInfo info; memset(&info,0,sizeof(info));
    info.paras = paras;
    info.abstime = 0.0;
    info.prev_solve = prev_solve;
    info.flags = CALC_RESIST_RESIDUAL | CALC_RESIST_JACOBIAN;
    /* --- set flow initial to consistent value (insert after prev_solve is allocated) --- */
/* find the flow node index */
int flow_idx = -1;
for (uint32_t i = 0; i < desc->num_nodes; ++i) {
    if (desc->nodes && desc->nodes[i].is_flow) { flow_idx = (int)i; break; }
}

/* resistor value (use your Verilog-A parameter here; for "parameter real R=5k;" use 5000.0) */
double R_val = 5000.0;   // <--- change if your .va uses a different R or pass it from argv

if (flow_idx >= 0 && (size_t)flow_idx < desc->num_nodes) {
    /* prev_solve already contains Va and Vb at idx_a and idx_b */
    double Va_val = prev_solve[idx_a];
    double Vb_val = prev_solve[idx_b];
    /* set flow to I = (Va - Vb) / R */
    prev_solve[flow_idx] = (Va_val - Vb_val) / R_val;
    printf("Set flow initial: node %d = %g A (Va=%g, Vb=%g, R=%g)\n",
           flow_idx, prev_solve[flow_idx], Va_val, Vb_val, R_val);
} else {
    printf("No flow node found; skipping flow init.\n");
}

    // call eval
    if (desc->eval) {
        uint32_t ret = desc->eval(NULL, inst, model, &info);
        printf("eval returned: 0x%x\n", ret);
    } else {
        fprintf(stderr, "descriptor has no eval\n");
    }

    // read residuals
    double *res = calloc(desc->num_nodes, sizeof(double));
    if (desc->load_residual_resist) {
        desc->load_residual_resist(inst, model, res);
    } else {
        fprintf(stderr, "descriptor has no load_residual_resist\n");
    }

    // read jacobian values (writer or loader preferred)
    if (J > 0) {
        if (desc->write_jacobian_array_resist) {
            desc->write_jacobian_array_resist(inst, model, jac_values);
        } else if (desc->load_jacobian_resist) {
            desc->load_jacobian_resist(inst, model);
        } else {
            // hope eval filled jac_values through pointers we placed earlier
        }
    }

    // print node names if available
    printf("\nNodes (index : name, is_flow):\n");
    for (uint32_t i=0;i<desc->num_nodes;i++) {
        const char *nm = (desc->nodes && desc->nodes[i].name) ? desc->nodes[i].name : "<unnamed>";
        printf(" %2u : '%s'  is_flow=%d\n", i, nm, desc->nodes ? desc->nodes[i].is_flow : 0);
    }

    // print residuals
    printf("\nResiduals (index : value):\n");
    for (uint32_t i=0;i<desc->num_nodes;i++) {
        const char *nm = (desc->nodes && desc->nodes[i].name) ? desc->nodes[i].name : "<n>";
        printf(" r[%u] (%s) = %.12g\n", i, nm, res[i]);
    }

    // map sparse jacobian entries into dense matrix for clarity
    uint32_t N = desc->num_nodes;
    double *Jdense = calloc(N*N, sizeof(double));
    if (desc->jacobian_entries && jac_values) {
        for (uint32_t i=0;i<desc->num_jacobian_entries;i++) {
            OsdiJacobianEntry *e = &desc->jacobian_entries[i];
            uint32_t r = e->nodes.node_1;
            uint32_t c = e->nodes.node_2;
            if (r < N && c < N) Jdense[r*N + c] = jac_values[i];
        }
    } else if (jac_values) {
        // Unknown mapping: just dump linear list if we have values but no entries
        for (uint32_t i=0;i<J;i++) {
            printf(" J[%u] = %.12g (no jacobian_entries metadata)\n", i, jac_values[i]);
        }
    }

    // print sparse entries nicely (row/col labels)
    if (desc->jacobian_entries && jac_values) {
        printf("\nSparse Jacobian entries (row, col) : value\n");
        for (uint32_t i=0;i<desc->num_jacobian_entries;i++) {
            OsdiJacobianEntry *e = &desc->jacobian_entries[i];
            uint32_t r = e->nodes.node_1;
            uint32_t c = e->nodes.node_2;
            const char *rnm = (desc->nodes && desc->nodes[r].name) ? desc->nodes[r].name : "<r>";
            const char *cnm = (desc->nodes && desc->nodes[c].name) ? desc->nodes[c].name : "<c>";
            printf(" entry[%u] : (row=%u '%s', col=%u '%s') = %.12g   flags=0x%x\n",
                   i, r, rnm, c, cnm, jac_values[i], e->flags);
        }
    }

    // print dense matrix
    if (Jdense) {
        printf("\nDense Jacobian (rows x cols = %u x %u):\n", N, N);
        for (uint32_t r=0;r<N;r++) {
            for (uint32_t c=0;c<N;c++) {
                printf("%12.6g ", Jdense[r*N + c]);
            }
            printf("\n");
        }
    }

    // Attempt reduction to nodal (eliminate single flow unknown)
    // Find exactly one flow node
    int flow_count = 0;
    if (desc->nodes) {
        for (uint32_t i=0;i<N;i++) {
            if (desc->nodes[i].is_flow) { flow_idx = (int)i; flow_count++; }
        }
    }
    if (flow_count == 0) {
        // fallback: assume last index is flow if N>2 (common)
        if (N > 2) { flow_idx = N - 1; flow_count = 1; printf("\nNo 'is_flow' set; assuming flow index = %d\n", flow_idx); }
    }
    if (flow_count == 1) {
        printf("\nPerforming Schur complement reduction eliminating flow index %d\n", flow_idx);
        // build reduced index mapping
        uint32_t M = N - 1;
        double *Jred = calloc(M*M, sizeof(double));
        double *rred = calloc(M, sizeof(double));
        // Build A (rows/cols excluding flow), B (col f), C (row f), D scalar
        double D = Jdense[flow_idx*N + flow_idx];
        if (D == 0.0) {
            printf("Warning: Jff == 0, cannot invert; reduction will be invalid.\n");
        }
        // map indices
        uint32_t idx_map[64]; // small convenience (assume N small)
        uint32_t k = 0;
        for (uint32_t i=0;i<N;i++) {
            if ((int)i == flow_idx) continue;
            idx_map[k++] = i;
        }
        // fill Jred = A - B * (1/D) * C
        for (uint32_t i=0;i<M;i++) {
            for (uint32_t j=0;j<M;j++) {
                double Aij = Jdense[idx_map[i]*N + idx_map[j]];
                double Bij = Jdense[idx_map[i]*N + flow_idx]; // B_i
                double Cj = Jdense[flow_idx*N + idx_map[j]];  // C_j
                double val = Aij;
                if (D != 0.0) val -= (Bij * Cj) / D;
                Jred[i*M + j] = val;
            }
            // reduced residual: r_i' = r_i - B_i*(1/D)*r_f
            double ri = res[idx_map[i]];
            double rf = res[flow_idx];
            double Bi = Jdense[idx_map[i]*N + flow_idx];
            double rvi = ri;
            if (D != 0.0) rvi -= (Bi * rf) / D;
            rred[i] = rvi;
        }
        printf("\nReduced nodal Jacobian (%u x %u) and reduced residuals:\n", M, M);
        for (uint32_t i=0;i<M;i++) {
            for (uint32_t j=0;j<M;j++) printf("%12.6g ", Jred[i*M + j]);
            printf("   |   r'[%u]=%12.6g\n", i, rred[i]);
        }
        free(Jred);
        free(rred);
    } else {
        printf("\nNot performing nodal reduction: found %d flow nodes (need exactly 1).\n", flow_count);
    }

    // cleanup
    free(Jdense);
    free(res);
    free(prev_solve);
    free(jac_values);
    free(model);
    free(inst);
    dlclose(h);
    return 0;
}

