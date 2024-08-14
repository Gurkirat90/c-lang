#include<stdio.h>
//sqaure matrice multiplicaton
int main()
{
  int a[3][3] ={{1,2,3},{3,4,5},{5,6,7}};
  int b[3][3] ={{1,2,3},{5,6,7},{7,8,9}};
  int res[3][3];
  int cr=3;
  //multiplying
  for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
      res[i][j]  = 0;
      for (int  k=0;k<cr;k++){
        res[i][j] += a[i][k]*b[k][j]; //for square it a[i][k]*a[k][j];
      }
    }
  }
  for(int i=0;i<3;i++)
  {
    for(int j=0;j<3;j++)
    {
      printf("%d\t",res[i][j]);
    }
    printf("\n");
  }

  return 0;
}