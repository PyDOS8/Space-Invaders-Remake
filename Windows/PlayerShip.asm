.80836
.model stack, flat
.data
 playerLives: dd 0
 GameOver: dd 0
 IHaveAnIQBelowSeventy: dd 0 ; Times Reseted
 IAmSoDumb: dd 0 ; Score 
.text
 _WindowsIAmSoStupid PROC ; Check if we can restart the game
   CMP DWORD PTR [GameOver], 0
   JG _ResetGame
   JLE _PlayGame
