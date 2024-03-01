; This will load the Kernel into memory 
.CODE

ORG 0x00000000
.8086 ; Intel 8086 (X86 16 bit processor)
.TEXT 
    _START PROC 
        MOV CX, [0xFFFF] ; Hold the data in the RAM 
        
        ; Check if the RAM is empty
        CMP CX, 0
        JG 0xFFFF
        JE _CheckIfAddressZeroIsEmpty
    _START ENDP

    _CheckIfAddressZeroIsEmpty PROC
        CMP [0x00000000], 0
        JG _LoadKernelIntoRamAndExecute
        ;JE _StoreKernelIntoMemoryAddressZero
    _CheckIfAddressIsEmpty ENDP 

    _LoadKernelIntoRamAndExecute PROC
        MOV [0x00000000], [0XFFF]   ; RAM = Kernel
        JMP 0x00000000
    _LoadKernelIntoRamAndExecute ENDP

    ;_StoreKernelIntoMemoryAddressZero:
     ;  MOV [0XFFFF], [kernel_code]
    ;_StoreKernelIntoMemoryAddressZero ENDP
