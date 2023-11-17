.global scaleU32
.global dotpU32

.text

//scaleU32(uint32_t y[], const uint32_t x[], uint32_t scale, uint32_t count);
//R0 = y[],   R1 = x[],   R2 = scale,   R3 = count
scaleU32:
    PUSH    {R4}            //save R4 to the stack
    CMP     R3, #0          //does count = 0?
scale_loop:
    BEQ     scale_exit
    LDR     R4, [R1], #4    //R4 = *(x++)
    MUL     R4, R4, R2      //R4 (x++) *= scale
    STR     R4, [RO], #4    //stores R4 (x++ * scale) into R0 (*y++)
    SUBS    R3, R3, #1      //decrement count by 1 (count--)
    B scale_loop
scale_exit:
    POP {R4}                //restores R4 from the stack
    BX LR

//dotpU32(const uint32_t x[], const uint32_t y[], uint32_t count);
//R0 = x[],   R1 = y[],   R2 = count
dotpU32:
    PUSH    {R4, R5}        //saves R4 and R5 to the stack
    MOV     R3, R0          //
    MOV     R0, #0          //R0 is now the dot product, it is set to 0 so th algorithm can work with it
    CMP     R2, #0