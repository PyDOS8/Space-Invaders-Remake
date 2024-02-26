bits 16
section .text
 global _ReadCharacter ; This function will read a character

_ReadCharacter:
  ; Read the character
  mov AH, 00h  
  int 16h
