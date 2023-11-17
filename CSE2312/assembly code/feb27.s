.global
.text



feb27:
    ;rotate
    //scp * pi@(ip):~/Downloads/Lab1
    strLength:
        MOV     R1, R0
        MOV     R0, #0
    sl_loop:
        LDRSB   R2, [R1, R0]
        CMP     R2, #0
        BEQ     sl_end
        ADD     R0, R0, #1
        B       sl_loop


        //LDRSB R2, [R0], #1
        //CMP   R2, #0
        //BNE   sl_loop
        //SUB   R0, R0, #1
    //c_loop:
        //LDRSB R2, [R1], #1
        //STRB  R2, [R0], #1
        //CMP   R2, #0
        //BNE   c_loop
        //BX LR
    sl_end:
        BX LR

    strCat:
