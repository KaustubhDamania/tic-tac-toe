#include <iostream>
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
