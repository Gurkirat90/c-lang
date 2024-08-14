//addition of all elements of matrice
#include<stdio.h>
int main()
{
    int r,c;
    printf("ENTER THE NO. OF ROWS = ");
    scanf("%d",&r);
    printf("ENTER THE NO. OF COLUMNS = ");
    scanf("%d",&c);

  int arr[r] [c];
    for(int i=0;i<r;i++){
    for(int j=0;j<c;j++)
      {
        printf("ENTER(%d,%d) ",i+1,j+1);
        scanf("%d",&arr[i][j]);
      }
      printf("\n");
  }int sum =0;
  for(int i=0;i<r;i++){
    for(int j=0;j<c;j++)sum += arr[i][j];
    }
  
  printf("THE SUM IS = %d",sum);
  return 0;
}