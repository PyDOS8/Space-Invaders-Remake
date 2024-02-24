section .text
  global _CheckForYAxisCollision
  global _CheckPlayerLives
  global _GameOver
  global _CheckForXAxisCollision

section .data 
  PlayerYAxis: dd 5 
  playerLives: dd 10
  playerXAxis: dd 5

_CheckForYAxisCollision:
    .include "EnemyShip.asm";
    test dword [playerYAxis], dword [enemyYAxis]
    jz _CheckPlayerLives

_CheckForXAxisCollision:
    .include "EnemyShip.asm"
    test dword [playerXAxis], dword [enemyXAxis]
    jz _CheckPlayerLives

_CheckPlayerLives:
    .include "GameOverScreen.asm"
    extern _GameOverScreen
    test dword [playerLives], 0  
    jz _GameOverScreen