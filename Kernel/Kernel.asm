.CODE
  ORG 0x0000
  .TEXT

    _start PROC 
      ; Store the Kernel into RAM
      CMP [0XFFFF], 0
      JG _CheckNextMemoryAddresss
    _start ENDP 

    _CheckNextMemoryAddress PROC
        CMP [0x0000], 0
        JG _MoveToRAM  
    _CheckNextMemoryAddress ENDP 

    _MoveToRAM PROC
        MOV [0XFFFF], [0X0000] ; RAM = Kernel
        JMP OXFFFF  ; Go to RAM and execute instructions
    _MoveToR ENDP