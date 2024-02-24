section .text
 global _RestartGame 
section .data
 MyIQIsLessThanSeventy: dd 10 ; Player lives
 IAmRetarded: dd 0 ; Game Over
 IAmSoDumb: dd 0 ; Score 
section .text
  global _RestartGame 
  global _StartGame
  global _CheckForGameOver
  global _ExitGame

_CheckForGameOver:
  cmp dword [IAmRetarded], 1
  je _RestartGame
  jl _StartGame

_ExitGame:
  extern _ExitProcess@4
  push 0
  call _ExitProcess@4
