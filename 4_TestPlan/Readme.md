# High Level Test Plan
| Test ID | Description | Exp I/P   | Exp o/p | Acutal Out | Type of Test |          
| -------| ----------- | --------- | ---------- | ---------- | ----------- |
| H_01 | Snake will touch or hit the boundry the will be over  | Touch/hit | Gameover | Gameover | Requirement Based | 
| H_02 | To Control the movement of snake press the key W A S D up,left,down,right | W A S D | Normal | No Crash | Scenario Based 
| H_03 | If snake eat the food in one time the max score is 10 |   *  | 10 | 10 | Boundary Based |


# Low Level Test Plan
| Test ID | Description | Exp I/P   | Exp o/p | Acutal Out | Type of Test |          
| -------| ----------- | --------- | ---------- | ---------- | ----------- |
| L_01 | snake movement control/speed is fixed | 1/sec | 1/sec | 1/sec |Requirement Based 
| L_02 | If user is want to Quit the they will press the key 'X' | X | Quit | Quit | Scenario Based 
| L_03 | Whenever the snake will touch the boundary the game is over  |  #   | Gameover | Gameover | Boundary Based |
