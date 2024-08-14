#include<stdio.h>
/*pascal triangle*/
int main()
{
  int n;
  printf("enter the n:");
  scanf("%d",&n);
  for (int i =0;i<=n;i++){
    int first =1;
    for(int j = 0;j<=i;j++){
        printf("\t%d\t",first);
        first = first * (i-j)/(j+1);
     }
    printf("\n");

    }
    return 0 ;
}
