//transpose of RECTANGULAR matrice
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
  }
  for(int i =0;i<r;i++){
    for(int j =0;j<c;j++)printf("%d\t",arr[i][j]);printf("\n");
  }printf("\n===============\n");
  for(int i =0;i<c;i++){
    for(int j =0;j<r;j++)
        printf("%d\t",arr[j][i]);printf("\n");
  }
  return 0;
}  