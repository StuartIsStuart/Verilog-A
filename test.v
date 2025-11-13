
module and2 #( ) (input  a, input  b, output y);
  assign y = a & b;
endmodule

module tb;
  reg  a, b;
  wire y;

  and2 uut (
    .a(a),
    .b(b),
    .y(y)
  );

  initial begin
    $display("a b | y");
    a = 0; b = 0; #1 $display("%b %b | %b", a, b, y);
    a = 0; b = 1; #1 $display("%b %b | %b", a, b, y);
    a = 1; b = 0; #1 $display("%b %b | %b", a, b, y);
    a = 1; b = 1; #1 $display("%b %b | %b", a, b, y);
    $finish;
  end
endmodule
