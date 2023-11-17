.global bro8
.global 
.text
//clock cycles
    //1 clock cycle is 1 GHz (1 billion cycles/second) or 1 nano second
        //1 clock cycle for most normal op code
        //BX LR and BL is 2 clock cycles
        //branch taken is 3 clock cycles
//effective memory access time
    //(1 - hit)
//hypervisor
    //what a virtual machine is run on
    //


//bit reverse order
bro8:
    MOV     R1, R0                  //
    MOV     R0, #0                  //R0 is the return register
    MOV     R2, #0x80               //128 in binary into R2
    MOV     R3, #0x01               //1 in binary into R3
bro_loop:
    TST     R1, R2                  //test with a logical and, R1 AND R2
    ORRNE   R0, R3                  //or if not equal, stores bits into return value R0
    MOVS    R2, R2, LSR #1          //move and set, move R2 into R2 and shift right one bit (basically divide R2 by 2)
    MOV     R3, R3, LSL #1          //move R3 into R3 and shift it left by one bit (basically multiply R3 by 2)
    BNE     bro_loop
    BX LR

