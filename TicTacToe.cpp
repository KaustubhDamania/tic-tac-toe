#include <iostream>
#include "check.cpp"
class TicTacToe{
private:
  char matrix[3][3];
public:
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
      printf("      -----------------------------------\n");
      printf("          WELCOME TO TIC-TAC-TOE GAME: \n\n\n\n");
  }
  void displayMatrix()
  {
    int j=0;
    for(int i=0; i<2; i++)
    {
      printf("                %c  |  %c  |  %c  \n",matrix[i][j],matrix[i][j+1],matrix[i][j+2]);
      printf("              -----------------\n");
    }
      printf("                %c  |  %c  |  %c  \n\n\n",matrix[2][j],matrix[2][j+1],matrix[2][j+2]);
      printf("\nPlayer %d ,enter your selection: \n",player);

  }
  void play()
  {
    while(!(checkDiagonal(matrix) || checkVertical(matrix) || checkHorizontal(matrix)))
    {
      scanf("%d",&selection);
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
        printf("\nPlayer %d won! Press any key to exit!\n", player);
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
/*
#include <iostream>
class TicTacToe{
private:
  char matrix[3][3];
public:
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
      printf("      -----------------------------------\n");
      printf("          WELCOME TO TIC-TAC-TOE GAME: \n\n\n\n");
  }
  void displayMatrix()
  {
    int j=0;
    for(int i=0; i<2; i++)
    {
      printf("                %c  |  %c  |  %c  \n",matrix[i][j],matrix[i][j+1],matrix[i][j+2]);
      printf("              -----------------\n");
    }
      printf("                %c  |  %c  |  %c  \n\n\n",matrix[2][j],matrix[2][j+1],matrix[2][j+2]);
      printf("\nPlayer %d ,enter your selection: \n",player);

  }
  bool checkVertical(char arr[][3])
{
  bool array[3]={true,true,true};
  for(int i=0; i<2; i++)
  {
    for(int j=0; j<3; j++)
    {
        if(arr[i][j]!=arr[i+1][j])
        {
          array[j]=false;
          //continue;
        }
    }
  }
  return (array[0]||array[1]||array[2]);
}
bool checkHorizontal(char arr[][3])
{
  bool array[3]={true,true,true};
  for(int i=0; i<3; i++)
  {
    for(int j=0; j<2; j++)
    {
        if(arr[i][j]!=arr[i][j+1])
        {
          array[i]=false;
          //continue;
        }
    }
  }
  return (array[0]||array[1]||array[2]);
}
bool checkDiagonal(char arr[][3])
{
  bool check1=true, check2=true;
  for(int i=0; i<2; i++)
  {
    if(arr[i][i]!=arr[i+1][i+1])
    {
      check1=false;
      break;
    }
  }
  int j=2;
  for(int i=0; i<2; i++,j--)
  {
      if(arr[i][j]!=arr[i+1][j-1])
      {
        check2=false;
      }
  }
  return check1 || check2;
}
  void play()
  {
    while(!checkDiagonal(matrix) || !checkVertical(matrix) || !checkHorizontal(matrix))
    {
      scanf("%d",&selection);
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
int main() {
  TicTacToe obj;
  obj.displayMatrix();
  obj.play();
  return 0;
}
*/
