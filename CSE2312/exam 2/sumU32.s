.global sumU32
.text

sumU32:                 //count is in R1, x[0] is in R0
    MOV     R2, R0      //move x[0] to R2
    MOV     R0, #0      //returning sum into R0 so set it to 0 after moving x[0] to R2
sum_loop:
    CMP     R1, #0
    BEQ     sum_exit    //if count is 0 then there is no more elements in the array, break to exit
    LDR     R3, [R2]    //loads the x value into R3
    ADD     R2, R2, #4  //basically x++, adds a byte to R2 to move to the next array address, basically x[next item]
    ADD     R0, R0, R3  //adds the value of x[initial value] to sum
    SUB     R1, R1, #1  //decrements count to continue through the loop as long as there are still elements
    B       sum_loop
sum_exit:
    BX LR