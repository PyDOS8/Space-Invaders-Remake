section .text
 global _RestartGame
 global _IncreaseScore 
 global _DecreaseScore
 global _IncludeMacros
 global _CheckIfPlayerWon
section .data
  playerLives: dd 10
  score: dd  0
  GameOver: dd 0   

_RestartGame:
  mov dword [playerLives], 10 
  mov dword [score], 0
  mov dword [GameOver], 0 

_IncludeMacros:
 %macro CheckIfWeCanIncreaseTheScore 1
   cmp dword [score], 10
   jl _%1
 endmacro%

 %macro CheckIfWeCanDecreaseTheScore 1
   cmp dword [score], 0   
   jg _%1 
 endmacro%

_IncreaseScore:
  add dword [score], 1

_DecreaseScore:
  sub dword [score], 1 

_CheckIfPlayerWon:
  cmp dword [score], 10
  je _RestartGame
