; This will move the Kernel into RAM 
.CODE
  ORG 0x0000
  .TEXT

    _start PROC 
      ; Check if RAM is empty
      CMP [0XFFFF], 0
      JG _CheckNextMemoryAddresss
    _start ENDP 

    _CheckNextMemoryAddress PROC
        CMP [0x0000], 0
        JG _MoveToRAM  
    _CheckNextMemoryAddress ENDP 

    _MoveToRAM PROC
        MOV [0XFFFF], [0X0000] ; RAM = Kernel
    _MoveToRAM ENDP
