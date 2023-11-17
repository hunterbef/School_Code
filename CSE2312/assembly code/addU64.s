.global addU64
.global even
.text


addU64:
    ADDS R0, R0, R2 // C:R0 (33b) <- R0 + R2, S means set/update flags
    ADC R1, R1, R3  //R1 <- R1 + R3 + C
    BX LR

    