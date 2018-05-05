#include <iostream>
#include <stdlib.h>
#include <time.h>
#include "check.cpp"
class TicTacToe{
private:
  char matrix[3][3];
public:
  int mode;
  int numberOfTurns=0;
  int player = 1+numberOfTurns%2;
  int selection;
  TicTacToe(){
      char count = '1';
      for(int i=0; i<3; i++)
      {
        for(int j=0; j<3; j++)
        {
          matrix[i][j]=count;
          count++;
        }
      }
      printf("     -----------------------------------\n");
      printf("          WELCOME TO TIC-TAC-TOE GAME: \n\n\n");
      printf("1 Player or 2 Player mode? - ");
      scanf("%d",&mode);
      printf("\n\n\n\n");
  }
  void displayMatrix()
  {
    int j=0;
    printf("\n\n");
    for(int i=0; i<2; i++)
    {
      printf("                %c  |  %c  |  %c  \n",matrix[i][j],matrix[i][j+1],matrix[i][j+2]);
      printf("              -----------------\n");
    }
      printf("                %c  |  %c  |  %c  \n\n\n",matrix[2][j],matrix[2][j+1],matrix[2][j+2]);
  }
  void play()
  {
    srand(time(NULL));
    while(!(checkDiagonal(matrix) || checkVertical(matrix) || checkHorizontal(matrix)))
    {
      printf("\nPlayer %d ,enter your selection: ",player);
      if(mode==2)
      {
        scanf("%d",&selection);
      }
      else{
        if(numberOfTurns%2==0)
        {
          scanf("%d",&selection);
        }
        else{
          selection = rand()%9 + 1;
          printf(" %d",selection);
        }
      }
      int i = (selection-1)/3;
      int j = (selection-1)%3;
      if(1+numberOfTurns%2==1)
      {
          matrix[i][j]='X';
      }
      else{
          matrix[i][j]='O';
      }
      player=1+(++numberOfTurns)%2;
      displayMatrix();
      if(checkDiagonal(matrix) || checkVertical(matrix) || checkHorizontal(matrix))
      {
        printf("\nPlayer %d won! Press any key to exit!\n", 1+player%2);
        break;
      }
      if(numberOfTurns==9)
      {
        printf("It is a draw!\n");
        break;
      }
    }
  }
};
/*int main() {
  TicTacToe obj;
  obj.displayMatrix();
  obj.play();
  return 0;
}*/
