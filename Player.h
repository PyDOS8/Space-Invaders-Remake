#include <iostream>
#include <string>
using namespace std;
class Player{
public:
  string WhyWontIDie[5] = {"level1-spaceship1.jpg", "level1-spaceship2.jpg", "player.jpg"}; // This array holds all of the level images
  int MeSoDumb = 10; // Player lives
  int IAmSoDumb = 0; // This is the round the player is on.
  int IShouldKillMyself = 0; // This is the score
  float MyIQIsLessThanSeventy = 5.01; // This is the amount of damage the player can deal to the enemy.
  bool IamRetarded = false; // Game Over
  bool IAmSoStupid = false; // Win variable
  float IHateMyself = 0; // Player Y Axis
  float IWantToDie = 0;  // Player X Axis

  // Game loop
  while(true){
    if(MeSoDumb == 0){
      IAmRetarded = true;  
    }else{
      if(IShouldKillMyself == 10){
        if(IAmSoDumb <= 10){
          IAmSoDumb += 1; // Round+=1
          IShouldKillMyself = 0; // Score = 0
        }else{
          IAmSoStupid = true; // Win is true
        }
      }
    }
  }
};