section .text
 global _DrawLeftAndRightSide 
 global _ColorLeftSide
 global _ColorRightSide
 global _DrawTopAndBottomSide

section .data
	LeftMainMenu: db "*"                        
	LeftMainMenuLength: equ $ - LeftMainMenu
	timesDrawn: dd 0
	newLine: dd 10
	RightMainMenu: db "*"
	RightMenuLength: equ $ - RightMainMenu
	colorCommand: db "color "
	playerSpaceShip: db "/\"

_DrawTopAndBottomSide:
    extern _WriteConsole

	; Draw the Top part of the main menu
	push TopMainMenu
	push TopMainMenuLength
	call _WriteConsole

	; Draw the bottom part of the main menu
	push LeftMainMenu
	push LeftMainMenuLength
	call _WriteConsole

_DrawLeftSide:

	; Positon the left side of the menu
	push 200
	call _SetCursorPosition 

	; Draw the blank line
	push newLine 
	push 2
	call _WriteConsole

	; Check if we need to draw again
	add dword [timesDrawn], 1
	cmp dword [timesDrawn], 50
	jg _DrawRightSide 
	jle _DrawLeftSide

_DrawLeftAndRightSide:
	
	; Draw the left side of the top menu
	push LeftMainMenu
	push LeftMainMenuLength
	call _WriteConsole 

	; Position the rigt side of the main menu 
	push newLine 
	push -200
	call _WriteConsole 

	; Draw the blank line
	push newLine
	push 2
	call _WriteConsole

	; Check if we need to draw again
	add dword [timesDrawn], 1
	cmp dword [timesDrawn], 100
	jle _DrawRightSide 
	jg _DrawPlayer

_DrawPlayer:

	; Draw the player space ship
	push playerSpaceShip
	push 3
	call _WriteConsole
