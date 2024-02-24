section .text
  global _GameOverScreen
  
section .data
  msg: db "Game Over! Try again next time!" 
  msgLength: equ $ - msg

_GameOverScreen:
 extern _printf 
 push msg 
 push msgLength
 call _printf 