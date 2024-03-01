from Enemy import Enemy
class Player:
  def __init__(self):
    
      # Initialize Player Variables
      self.playerLives = 10
      self.GameOver = False
      self.playerScore = 0
      self.playerWon = False

  def increaseScore():
      if self.playerScore < 20:
        self.playerScore = self.playerScore+1
      else:
        if Enemy.enemyScore < self.playerScore:  
          print(f'The player scored {self.playerScore} and the enemy scored {self.Enemy.enemyScore}')
          print("The player won!")
        else:
          print(f"The enemy scored {self.Enemy.enemyScore} and the player scored {self.playerScore}")
