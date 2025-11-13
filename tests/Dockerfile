FROM ubuntu:24.04

RUN apt update && \
    apt install -y --no-install-recommends ca-certificates build-essential clang lld binutils && \
    rm -rf /var/lib/apt/lists/*

WORKDIR /work
ENTRYPOINT ["/work/openvaf-r"]

