.global
.text

;for 64 bit numbers, higher bits are stored in R1 and the lower half in R0

feb20:
    ;--------------------------
    MOV     R0, #0x80000001
    MOV     R1, #0x80000000
    MOV     R2, #0x80000004
    MOV     R3, #0x70000000
    ;--------------------------
        ADDS    R0, R0, R2
        ADC     R1, R1, R3
    ;--------------------------



    MOV     R0, #17
    ;--------------------------
    TST     R0, #15
    ANDS    R1, R1, R0                  //ands = and store, performs an and operation and stores the result in a specified register
    MOVEQ   R0, #1
    MOVNE   R0, #0




/*
STR will always store the least significant bytes first, little endian goes from top to bottom and big endian goes bottom to top

    STR     R1, [R0]            R1 = 0xCD1258EF         R0 = 0x34000000
        0x34000000  =   EF
        0x34000001  =   58
        0x34000002  =   12
        0x34000003  =   CD
    least significant gets stored first with STR in little endian

    STRH    R1, [R0]            store half of the bytes
        0x34000000  =   EF
        0x34000001  =   58
        0x34000002  =   X
        0x34000003  =   X
    2 and 3 are left unassigned because only half of the data is stored

    STRB    R1, [R0]
        0x34000000  =   EF
        0x34000001  =   X
        0x34000002  =   X
        0x34000003  =   X
    store byte only stores one byte of data

    STR     R1, [R0] assuming big endian
        0x34000000  =   CD
        0x34000001  =   12
        0x34000002  =   58
        0x34000003  =   EF
    big endian still stores from lowest byte to highest, but it starts from the bottom up

    STRH    R1, [R0] assuming big endian
        0x34000000  =   58
        0x34000001  =   EF
        0x34000002  =   X
        0x34000003  =   X
    since big endian still goes from lowest to highest, it still starts with EF but stores in the bottom first

    STRB    R1, [R0] assuming big endian
        0x34000000  =   EF
        0x34000001  =   X
        0x34000002  =   X
        0x34000003  =   X


    
    0x53400000      0x23
    0x53400001      0x58
    0x53400002      0x32
    0x53400003      0x8B
    0x53400004      0x9A
    0x53400005      0xCD
    0x53400006      0xDE


all big endian

    LDR     R0, [R1]            R1 = 0x53400000
        0x2358328B9ACDDE
    
    LDRH    R0, [R1, R2]        R1 = 0x53400000     R2 = 2
        0x2358328B
    
    LDRSH   R0, [R1]            R1 = 0x53400004
        0xFFFF9ACD            //9 means signed bit is set

    LDRB    R0, [R1]
        0x000000CD


*/
