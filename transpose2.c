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
  //transpose
  for(int i=0;i<r;i++){
    for(int j=i;j<c;j++){
        int temp = arr[i][j];
        arr[i][j] = arr[j][i];
        arr[j][i] = temp;
    }
  }
  for(int i =0;i<r;i++){//for(int j=0;j<=i;j++)
    for(int j =0;j<c;j++)printf("%d\t",arr[i][j]);printf("\n")
  }

  return 0;
}  