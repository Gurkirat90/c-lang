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
  }
  int a[r] [c];
    for(int i=0;i<r;i++){
    for(int j=0;j<c;j++)
      {
        printf("ENTER(%d,%d) ",i+1,j+1);
        scanf("%d",&a[i][j]);
        printf("\n");
      }
  }
  //sum of 2 matrice
  for(int i=0;i<r;i++){
    for(int j=0;j<c;j++)
      {
        printf("%d\t",arr[i][j] +a[i][j]);
      }
    printf("\n");
  }
  return 0;
}