.global mar20
.text



mar20:
    B       rotate_right

rotate_right:
    MOV     R0, #0xFFFF01FF                //
    ROR     RO, R0, #30

isStrEqual:
    LDRB    R2, [R0], #1
    LDRB    R3, [R1], #1
    CMP     R2, R3
    MOVNE   R0, #0
    BNE     isStrEqual_exit
    CMP     R2, #0
    MOVEQ   R0, #1
    BEQ     isStrEqual_exit
    B       isStrEqual
isStrEqual_exit:
    BX LR


strCat:
    LDRB    R2, [R0], #1
    CMP     R2, #0
    BNE     strCat
    SUB     R0, R0, #1
strCat_copy_loop:
    LDRB    R2, [R1], #1
    STRB    R2, [R0], #1
    CMP     R2, #0
    BNE     strCat_copy_loop
    BX LR


leftString:
    CMP     R2, #0
    BEQ     leftString_exit
    LDRB    R3, [R1], #1
    STRB    R3, [R0], #1

leftString_exit:
    BX LR


decStringToInt:         //returns true if the strings match, false otherwise
                        //
    PUSH    {R4}        //
    MOV     R1, R0      //
    MOV     R0, #0      //
    MOV     R4, 
    LDRB    R2, [R1], #1
    CMP     R2, #'-'            //can #'-' or #45, same thing ascii-wise
    BLT     exit
    BGT     decString_loop
    MOV     R3, #1
    LDRSB   R2, [R1], #1
decString_loop:
    CMP     R2, #'0'
    BLT     bad_exit
    CMP     R2, #'9'
    BGT     bad_exit            //these both check if r2 contains a number between 0 and 9
    SUB     R2, R2, #'0'
    ADD     R0, R0, R2
    LSRSB   R2, [R1], #1        //loads next char
    CMP     R2, #0              //checks if there are any more characters, 0 means there are no more characters to load
    BEQ     exit                //if r2 is 0 that means there are no more characters and we can exit
    MUL     R0, R0, R4
    B       decString_loop
bad_exit:
    MOV     R0, #0
    POP     {R4}
    BX LR
exit:
    MOV     R4, #0xFF00
    ADD     R4, #0xFF
    CMP     R0, R4
    MOVHI   R0, #0
    CMP     R3, #1
    RSBEQ   R0, R0, #0
    POP     {R4}
    BX LR

hexStringToUint8:
    MOV     R1, R0
    MOV     R0, #0
hexStringToUint8_loop:
    LDRB    R2, [R1], #1