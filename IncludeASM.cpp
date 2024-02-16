#include <iostream>
using namespace std;
void IncludeASMFunctions(){
   __asm{
    .include "Graphics32.asm"
    .include "PlayerShip.asm"
    .include "EnemyShip.asm"
    extern _ResetPlayerLives
    extern _CheckPlayerLives

   }
}