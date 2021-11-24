#include "inc/sanke.h"
  
int i, j, height = 20, width = 20;
int gameover, score;
int x, y, fruitx, fruity, flag;
  
// Function to generate the fruit
// within the boundary
// Function to draw the boundaries
void draw()
{
    system("cls");
    for (i = 0; i < height; i++) {
        for (j = 0; j < width; j++) {
            if (i == 0 || i == width - 1
                || j == 0
                || j == height - 1) {
                printf("#");
            }
            else {
                if (i == x && j == y)
                    printf("0");
                else if (i == fruitx
                         && j == fruity)
                    printf("*");
                else
                    printf(" ");
            }
        }
        printf("\n");
    }
  
    // Print the score after the
    // game ends
    printf("score = %d", score);
    printf("\n");
    printf("press X to quit the game");
}
  
// Function to take the input
// Driver Code
void main()
{
    int m, n;
  
    // Generate boundary
    setup(x,y,fruitx,fruity,gameover,height,width,score);
  
    // Until the game is over
    while (!gameover) {
  
        // Function Call
        draw();
        input(gameover,flag);
        logic(flag,y,x,height,width,gameover,fruitx,fruity,score);
    } 
}
