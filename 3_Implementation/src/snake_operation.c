#include "../inc/sanke.h"
  
// Function to generate the f
// within the boundary
int setup(int x,int y,int fruitx,int fruity, int gameover,int score,int height, int width)
{
    gameover = 0;
  
    // Stores height and widt
    x = height / 2;
    y = width / 2;
label1:
    fruitx = rand() % 20;
    if (fruitx == 0)
        goto label1;
label2:
    fruity = rand() % 20;
    if (fruity == 0)
        goto label2;
    score = 0;
    return 1;
}
   int input(int flag,int gameover)
{
    if kbhit() {
        switch (getchar()) {
        case 'a':
            flag = 1;
            break;
        case 's':
            flag = 2;
            break;
        case 'd':
            flag = 3;
            break;
        case 'w':
            flag = 4;
            break;
        case 'x':
            gameover = 1;
            break;
        
        }
    }
    return 1;
 }
 int logic(int flag,int y,int x,int height,int width, int gameover,int fruitx,int fruity,int score)
{
    sleep(0.01);
    switch (flag) {
    case 1:
        y--;
        break;
    case 2:
        x++;
        break;
    case 3:
        y++;
        break;
    case 4:
        x--;
        break;
    default:
        break;
    }
  
    // If the game is over
    if (x < 0 || x > height
        || y < 0 || y > width)
        gameover = 1;
  
    // If snake reaches the fru
    // then update the score
    if (x == fruitx && y == fruity){
    label3:
        fruitx = rand() % 20;
        if (fruitx == 0)
            goto label3;
  
    // After eating the above f
    // generate new fruit
    label4:
        fruity = rand() % 20;
        if (fruity == 0)
            goto label4;
        score += 10;
    }
    return 1;

}

  
  
// Driver Code
