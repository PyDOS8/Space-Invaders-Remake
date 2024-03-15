%macro MOVE 2
    MOV %1, %2
%endmacro 

%macro print 2
    extern _printf
    MOV ECX, %1
    MOV EDX, %2
    CALL _printf
%endmacro 

%macro subtract 2
  SUB %1, %2
%endmacro

%macro compare 2
    CMP %1, %2
%endmacro

%macro jump 1
    jmp %1
%endmacro 

%macro jumpifequal 1
  je %1
%endmacro

%macro jumpifless 1
    jl %1
%endmacro 

%macro jumpifgreater 1
    jg %1
%endmacro 

%macro addition %2
    ADD %1, %2
%endmacro

%macro movetostack 1
    PUSH %1
%endmacro 

%macro ALLOC 2
    extern _malloc
    MOV ECX, %1
    MOV EDX, %2
    call _malloc 
%endmacro

%macro DEALLOC 2
    MOV ECX, %1
    MOV EDX, %2
    call _free
%endmacro  

%macro input 2
 extern _iostream
 MOV ECX, %1
 MOV EDX, %2
 call _iostream
%endmacro

%macro ROUND_UP 2
  extern _cmath 
  MOV ECX, %1
  MOV EDX, %2
  call _ceil 
%endmacro

%macro ROUND_DOWN 2 
  extern _cmath
  MOV ECX, %1
  MOV EDX, %2
  extern _floor 
%endmacro 

%macro IN_BUS 1
    IN %1
%endmacro

%macro OUT_BUS 1
    OUT %1
%endmacro

%macro removefromstack 1
    POP %1
%endmacro

%macro sin 2
    extern _cmath
    MOV ECX, %1
    MOV EDX, %2
    call _sin 
%endmacro

%macro cos 2
    extern _cmath
    MOV ECX, %1
    MOV EDX, %2
    call _cos
%endmacro
