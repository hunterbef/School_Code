.text
.global strCat



str_length:
    

sl_end: 
    BX LR

strCat:
    LDRSB R2, [R0], #1
    CMP R2, #0
    BNE strCat
    SUB R0, R0, #1
    
str_copy:
    LDRSB R2, [R1], #1
    STRB R2, [R0], #1
    CMP R2, #0
    BNE str_copy
    BXLR