//find the row number with max 1's
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
  }int maxc =0,maxi =0;
  for(int i=0;i<r;i++)
  {
    int count =0;
    for(int j=0;j<c;j++)
    {
    if(arr[i][j]==1)
    count++;
    }
    printf("\n1's of %d row = %d",i+1,count);

   if(maxc<=count)
   { maxc = count; 
     maxi = i;
     }
  }

   printf("\n row with %d 1's = %d",maxc,maxi+1);
return 0;
}