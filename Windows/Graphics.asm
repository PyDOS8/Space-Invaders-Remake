section .data
 mainMenuTop:   db "***************************************************"
 mainMenuTopLength: equ $- mainMenuTop 
 mainMenuEnd: db "***************************************************"
 mainMenuEndLength: equ $ - mainMenuEnd
section .text
 global _DrawMainMenu
 global _exit

_DrawMainMenu:
 ; Draw the top part of the main menu
 extern _printf
 push mainMenuTop
 push mainMenuTopLength
 call _printf

 ; Draw the bottom part of the main menu
 push mainMenuEnd
 push mainMenuEndLength
 call _printf

_exit:
 extern _ExitProcess@4
 push 0 ; Exit code (0) Sucessful exit
 call _ExitProcess@4
