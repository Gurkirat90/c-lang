#include<stdio.h>
/*pascal triangle*/
int fact(int n);//declaraton or prototype
int com (int n,int r);
int main()
{
  int n;
  printf("enter the n:");
  scanf("%d",&n);
  for (int i =0;i<=n;i++){
    for(int j = 0;j<=i;j++){
      com(i,j);
      printf("\t%d\t",com(i,j));
    }
    printf("\n");

    }return 0 ;
}
int fact(int n)//defination
{
  int product=1;
  for (int i =1;i<=n;i++) {
    product=product*i;
  }
  return product;
}
int com (int n,int r){
int ncr = fact(n)/(fact(r)*fact(n-r));
  return ncr;
  }