.8086
.model stack, flat

.data
 playerLives: dd 10
 GameOver: dd 0
 IHaveAnIQBelowSeventy: dd 0 ; Times Reseted
 IAmSoDumb: DD 0    ; Score

.text
  _IWantToDie PROC ; Reset the game 
    MOV DWORD PTR [GameOver], 0
    MOV DWORD PTR [GameOver], 0
    MOV DWORD PTR [IHaveANIqBelowSeventy], 0
    RET
  _IWantToDie ENDP
  
  _WindowsIAmSoStupid PROC  ; Check if the game can reset
    CMP DWORD PTR [IHaveAnIQBelowSeventy], 5
    JLE _IHateMyself ; If we can reset the game, reset.
    JG _IWantToDie  ; If we can't reset the game, output game over screen
  _WindowsIAmSoStupid ENDP

  _WindowsIHateMyself PROC    ; Reset the variables  
    MOV DWORD PTR [IHaveAnIQBelow70], 0 
    MOV DWORD PTR [GameOver], 0
    MOV DWORD PTR [playerLives], 10
    RET
  _WindowsIHateMyself ENDP

  _WindowsWhyWontIDie PROC  ; Check if the player has died
    CMP DWORD PTR [playerLives], 0
    JE _WindowsIAmSoStupid  ; If the player died check if we can reset the game.
  _WindowsWhyWontIDie ENDP
