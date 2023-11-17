//checks if a number is odd or even 

    MOV     R0, #255
    ;-----------------------
    MOVS    R0, R0, LSR #1              //logical shift right is basically dividing by 2, if carry flag is set then there was a remainder
                                                //so therefore the first bit was set
    
    MOVCC   R0, #1                      //move carry clear, if the carry flag is clear that means the number is divisible by 2 and puts 1 in R0
    MOVCS   R0, #0                      //move , if the carry flag is set then it is not divisible by 2 so it assigns 0 to R0
    MOV     R0, R2  

    ;-----------------------

    ANDS     R0, R0, #1                 //logical and checks the register and sets the zero flag if the number is odd
    MOVEQ    R0, #0                     //moves if equal, sets R0 to 0 if the zero flag is not set
    MOVNE    R0, #1                     //move not equal, sets R0 to 1 if the zero flag is set