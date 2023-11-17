    LDR     R0, =data


    MOV     R1, R0                      //moves data from R0 to R1
    MOV     R0, #0                      //R0 has the return value, but it is 0 since it got moved to R1
LOOP
    LDRB    R2, [R1], #1                //loads a byte into R2 from whatever is in R1, increments by 1 (#1)
    CMP     R2, #0                      //compares whatever is in R2 with the number 0, sets a zero flag if R2 is zero
    ADDNE   R0, R0, #1                  //if not equal (checks if the zero flag is set), adds R0 and 1 and puts it into R0
    BNE     LOOP                        //returns to the top of the loop until a zero is found in R2
    END

data
    DCB     0x48, 0x65, 0x6c, 0x6c
    DCB     0x6f, 0x20, 0x57, 0x6f
    DCB     0x72, 0x6c, 0x64, 0x00