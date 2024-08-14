//find the row number with max sum
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
  }int rm =0,maxi =0;
  for(int i=0;i<r;i++)
  {int sum =0;
    for(int j=0;j<c;j++)
      sum += arr[i][j];
  printf("\nsum of %d row = %d",i+1,sum);
   
   if(rm<=sum)
   { rm = sum; 
     maxi =i;}
  }
   printf("\n row  = %d",maxi+1);
return 0;
}