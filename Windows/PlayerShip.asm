.386
.model stack, flat
.data
 MyIQIsLessThanSeventy: dd 10 ; Player lives
 IAmRetarded: dd 0 ; Game Over
 IAmSoDumb: dd 0 ; Score 
.text
_RestartGame PROC ; Reset player variables 
    MOV PTR DWORD [MyIQIsLessThanSeventy], 10
    MOV PTR DWORD [IAmRetarded], 0 
    MOV PTR DWORD [IAmSoDumb], 0
_RestartGame ENDP

_CheckForGameOver  PROC ; Check if the game is over
    CMP PTR DWORD [IAmRetarded], 1
    JL _StartGame 
    JE _RestartGame
_CheckForGameOver ENDP
