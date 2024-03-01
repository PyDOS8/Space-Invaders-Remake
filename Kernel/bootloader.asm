; This will load the Kernel into memory 
.CODE

ORG 0x00000000
.8086 ; Intel 8086 (X86 16 bit processor)
.TEXT 
    _START PROC 
        MOV CX, [0x00000000] ; Hold the data in the RAM 
        
        ; Check if the RAM is empty
        CMP CX, 0
        JG _BootGame 
    ENDP

    _BootGame PROC 
        JMP CX
    _BootGame ENDP
