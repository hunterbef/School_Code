

strLength:
    MOV R1, R0
    MOV R0, #0
sl_loop:
    LDRSB R2, [R1, R0]          //LDRSB R2, [R1], #1 adds one to R1
    CMP R2, #0
    BEQ sl_end
    ADD R0, R0, #1
    B sl_loop
sl_end:
    BX LR