#include <iostream>
//#include "TicTacToe.cpp"
#include "check.cpp"
void display(char arr[][3])
{
  for (int i = 0; i < 3; i++) {
    /* code */
    for (int j = 0; j < 3; j++) {
      /* code */
      printf("%c ",arr[i][j]);
    }
    printf("\n");
  }
}
int main(int argc, char const *argv[]) {
  char arr[3][3];
  char count = '1';
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      arr[i][j]=count;
      count++;
    }
  }
  display(arr);
  printf("\n");
  /*for (int i = 0; i < 3; i++) {
    arr[1][i]='1';
  }*/
  arr[1][1]='2';
  arr[2][1]='2';
  display(arr);
  (checkVertical(arr)) ? printf("Yes\n") : printf("No\n");
  arr[0][0]='2';
  arr[0][2]='2';
  display(arr);
  (checkHorizontal(arr)) ? printf("Yes\n") : printf("No\n");
  arr[2][2]='2';
  display(arr);
  (checkDiagonal(arr)) ? printf("Yes\n") : printf("No\n");
  return 0;
}

/*for (int i = 0; i < 3; i++) {

  arr[i][0]='1';
}
printf("\n");
display(arr);
(checkVertical(arr)) ? printf("Yes\n") : printf("No\n");
for (int i = 0; i < 3; i++) {

  arr[0][i]='1';
}
display(arr);
(checkHorizontal(arr)) ? printf("Yes\n") : printf("No\n");
arr[1][1]='1';
display(arr);
(checkDiagonal(arr)) ? printf("Yes\n") : printf("No\n");
arr[2][0]='5';
arr[2][2]='1';
display(arr);
(checkDiagonal(arr)) ? printf("Yes\n") : printf("No\n");*/
