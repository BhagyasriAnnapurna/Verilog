module FA (in_1, in_2, Cin, Sum, Carry);
    input in_1, in_2, Cin;
    output Sum, Carry;
    wire w0, w1, w2;
    HA_BM HA1 (in_2, in_1, w0, w1);     // order based inst.
    HA_BM HA2 (w0, Cin, Sum, w2);
    or g1 (Carry, w1, w2);  // assign Carry = w1|w2;
endmodule


module FA (in_1, in_2, Cin, Sum, Carry);
    input in_1, in_2, Cin;
    output Sum, Carry;
    wire w0, w1, w2;
    HA_BM HA1 (.A(in_1), .S(w0), .C(w1), .B(in_2));     // name based inst.
    HA_BM HA2 (.A(w0), .B(Cin), .S(Sum), .C(w2));
    or g1 (Carry, w1, w2);  // assign Carry = w1|w2;
endmodule 