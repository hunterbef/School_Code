/*
floating point numbers returned to vector registers
    vector floating point registers
        S0 - single point register 0, for 32 bit
        D0 - double point register 0, for 64 bit

only one way to set flags with 
        VCMP command

VMRS APSR_nzcv, FPSCR
        instruction to move the register status 
        VMRS        -   
        ASPR_nzcv   -   the flags 
        FPSCR       -   floating point status and control register


VCMP
    vector compare
        can be used to set condition flags in vector registers
        VMOV {cond} Rd, Sn      or      VMOV {cond} Sn, Rd
            Sn = single precision register
            Rd = ARM register
VMOV
    vector move
VLDR
    vector extension register load
        VLDR {cond}{.size} Fd, [Rn{,offset}]
            one word transfered if Fd is an S register, two otherwise
VSQRT
    vector square root
        VSQRT {cond}.F64 
VPUSH

VADD
    vector add
    must specify is its 32 or 64 bit
        VADD{cond}.F32 {Sd}, Sn, Sm                S means single precision
        VADD{cond}.F64 {Dd}, Dn, Dm                D means double precision
VMUL 
    vector multiply
        VMUL{cond}.F32
        VMUL{cond}.F64
*/



.global meanF64
.global sumF64
.text


//double meanF64(const double x[], uint32_t count)
meanF64:
    MOV             R2, #0              //sets R2 to 0
    VMOV            D0, R2, R2          //D0 = R2 = 64bits of zeros
    VMOV            S4, R1              //S4 = count
    CMP             R1, #0              //checks if count is 0
    BEQ             mean_end            //skip to end to avoid dividing by 0
mean_loop:
    VLDR            D1, [R0]            //D1 = the address of R0 which is the address of the x array
    ADD             R0, R0, #8          //R0 += sizeof(double) or x++          64 bit uses 8 and 32 bit uses 4 here
    VADD.F64        D0, D0, D1          //D0 = D0 + D1                  creates a sum of all the integers
    SUBS            R1, R1, #1          //decrement count
    BNE             mean_loop           //get next member of the x array if count is not 0
mean_div:
    VCVT.F64.U32    D1, S4              //D1 = count                    count is total number of integers in the array
    VDIV.F64        D0, D0, D1          //D0 = (D0 / D1)                divides the sum of the array integers by count 
mean_end:
    BX  LR


sumF64:
    MOV             R2, #0
    VMOV            D0, R2, R2
    CMP             R1, #0
sum_loop:
    BEQ             sum_end
    VLDR            D1, [R0]
    ADD             R0, R0, #8
    VADD.F64        D0, D0, D1
    SUBS            R1, R1, #1
    B               sum_loop
sum_end:
    BX  LR


sumF32:
    MOV         R2, #0
    VMOV        S0, R2, R2
    CMP         R1, #0
sum_loop:
    BEQ         sum_end      
    VLDR        S1, [R0]
    ADD         R0, R0, #4              //increments the integer array by a floating point
    VADD.F32    S0, S0, S1
    SUBS        R1, R1, #1
    B           sum_loop
sum_end:
    BX  LR


prodF64:
    MOV         R2, #0
    VMOV        D0, R2, R2
    VLDR        D0, [R0]
    ADD         R0, R0, $8
    CMP         R1, #0
prod_loop:
    BEQ         prod_end
    VLDR        D1, [R0]
    ADD         R0, R0, #8
    VMUL.F64    D0, D0, D1
    SUBS        R1, R1, #1
    B           prod_loop
prod_end:
    BX  LR


maxF32:
    MOV         R2, #0
    VMOV        S0, R2, R2
    CMP         R1, #0
    BEQ         max_end
max_loop:
    VLDR        S1, [R0]
    ADD         R0, R0, #4
    CMP         S0, S1
    MOVLT       S0, S1
    SUBS        R1, R1, #1
    CMP         R1, #0
    BNE         max_loop
max_end:
    BX  LR@@
