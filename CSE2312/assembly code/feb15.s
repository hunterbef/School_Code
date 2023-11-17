.global feb15
.text



feb15:
    //int16_t maxS16(int16_t x, int16_t y)
            MOV     R0, #5
            MOVE    R1, #20
        ;---------------------
        Label
            CMP     R1, R0                      //compares the two numbers in the resgisters, in other words R0 ? R1, MOVLT makes it R0 < R1 and MOVGT makes it R0 > R1
            MOVLT   R0, R1                    //order matters with CMP as it marks the sytax of the comparison.....     R0, R1 is R1 ? R0
            ;BX LR


    //uint32_t maxU32(uint32_t x, uint32_t y)
            MOV     R0, #-1
            MOV     R1, #20
        ;------------------
        Label   
            CMP     R0, R1
            MOVLT   R0, R1
            ;BX LR


    //bool isGreaterThanU16(uint16_t x, uint16_t y)
            MOV     R0, #-1
            MOV     R1, #20
        ;------------------
        Label   
            CMP     R0, R1
            MOV     R0, #0
            MOVLT   R0, R1
            ;BX LR


    //bool isGreaterThanS16(int16_t x, int16_t y)           //returns 1 if x>y, 0 else
            MOV     R0, #-1
            MOV     R1, #20
        ;------------------
        Label   
            CMP     R0, R1
            MOV     R0, #0
            MOVGT   R0, #1
            ;BX     LR
    

//THREE DIFFERENT WAYS TO DO THIS PROBLEM

    //uint16_t shiftU16(uint16_t x, int6_t p)               //return x*2^p for p = -31..31
            MOV     R0, #32
            MOV     R1, #-3
        ;------------------
        Label
            CMP     R1, #0
            MVNLT   R1, R1                      
            ADDLT   R1, R1, #1
            MOVLT   R0, R0, LSR R1
            BLT     exit                    //branch less than(BLT), if it is less than then it jumps to the exit mark
            MOV     R0, R0, LSL R1
        exit
            ;BX     LR
        

    //uint16_t shiftU16(uint16_t x, int6_t p)
            MOV     R0, #32
            MOV     R1, #-3
        ;------------------
        Label
            CMP     R1, #0                  //sets the flags, in this case the N flag
            MVNLT   R1, R1                  //move not less than (MVNLT), sets R1 to its ones compliment if the N flag is set (ones compliment of -3 is 2)
            ADDLT   R1, R1, #1              //adds one to R1 if N flag is set, completing the twos compliment and making the negative in R1 a positive
            MOVLT   R0, R0, LSR R1
            BLT     exit                    //branch less than(BLT), if it is less than then it jumps to the exit mark
            MOV     R0, R0, LSL R1
        exit
            ;BX     LR


    //uint16_t shiftU16(uint16_t x, int6_t p)
            MOV     R0, #32
            MOV     R1, #-3
        ;----------------------------
        Label
            CMP     R1, #0                      //R1 ? #0
            BLT     negative_exponent           //R1 < #0, R1 = -3, R1 = twos compliment of 3 so its actually greater than, sets the N flag         
            MOV     R0, R0, LSL R1
            B       exit
        negative_exponent
            MVN     R1, R1
            ADD     R1, R1, #1
            MOV     R0, R0, LSR R1
        exit
            ;BX     LR


    //bool isBitSetU32(uint32_t x, uint32_t bit)    //returns 1 if the requested bit is set in x, 0 else
        


    //bool isMultOf4U32(uint32_t x)                 //returns 1 if x is an integer multiple of 4, 0 else



    //bool isEqualU16(uint16_t x, uint16_t y)       //returns 1 if x=y, 0 if x!=y
            MOV     R0, #3
            MOV     R1, #3
        ;------------------
        Label   
            CMP     R1, R0
            MOVNE   R0, #0
            MOVEQ   R0, #1
        exit
            ;BX     LR

