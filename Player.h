#include <iostream>
using namespace std;
class Player{
public:
  int playerLives = 10;
  float playerAttackDamage = 5.01; // This is the amount of damage the player can deal to the enemy.
  bool GameOver = false;
  if(playerLives == 0){
     GameOver = true;  
  }
};
