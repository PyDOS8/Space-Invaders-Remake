#include <iostream>
using namespace std;
class Player{
public:
  int MeSoDumb = 10; // Player lives
  int IAmSoDumb = 0; // This is the round the player is on.
  int IShouldKillMyself = 0; // This is the score
  float MyIQIsLessThanSeventy = 5.01; // This is the amount of damage the player can deal to the enemy.
  bool IamRetarded = false; // Game Over
  if(MeSoDumb == 0){
     IAmRetarded = true;  
  }else{
    if(IShouldKillMyself == 10){
       IAmSoDumb += 1; // Round+=1
    }
}

