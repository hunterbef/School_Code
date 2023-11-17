/*
return value is always r0, r0 r1 in 64 bit
    
        R4          1234 5678
        R5          EA68 374C
        SP     =    C000 000C
        PUSH {R4, R5}   little endian
        C000 0000      N/A
        C000 0001      N/A
        C000 0002      N/A
        C000 0003      N/A
        C000 0004      78
        C000 0005      56
        C000 0006      34
        C000 0007      12
        C000 0008      4C
        C000 0009      37
        C000 000A      68
        C000 000B      EA
        C000 000C      N/A

PUSH saves the bytes in whichever endian is specified on top of the stack pointer (SP) with R4 on top of R5
    you can push multiple registers, {R4-R6} means R4 R5 and R6, {R4-R6, R9} means R4 R5 R6 and R9
*/


.global intToString
.global max32
.text

number DCD      5000

intToString:
        ADR     R0, number      //
        LDR     R0, [R0]        //
        AND     R1, R0, #9

max32:
        MOV     R2, R0
        CMP     R1, #0
        BEQ     exit
        LDRB    R0, [R2], #4
        SUB     R1, R1, #1
    loop:
        BEQ     exit
        LDR     R3, [R2], #4
        CMP     R3, R0
        MOVGT   R0, R3
        SUBS    R1, R1, #1
        B       loop
    exit:
        BX LR


