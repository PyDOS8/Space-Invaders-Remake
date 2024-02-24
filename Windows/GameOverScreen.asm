section .text
  global _GameOverScreen
  global _ExitGame

section .data
  msg: db "Game Over! Try again next time!" 
  msgLength: equ $ - msg

_GameOverScreen:
 extern _printf 
 push msg 
 push msgLength
 call _printf 
 
_ExitGame:
 extern _ExitProcess@4
 push 0 ; Exit Code (0) (Exit without outputting errors)
 call _ExitProcess@0 ; Exit 
