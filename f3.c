#include<stdio.h>
int fact(int n);//declaraton or prototype
int main()
{
  int n ,r;
  printf("enter the n:");
  scanf("%d",&n);
  printf("enter the r:");
  scanf("%d",&r);
  
  int com = fact(n)/(fact(r)*fact(n-r));
  printf("%d",com);
  return 0 ;
}
int fact(int n)//defination
{
  int product=1;
  for (int i =1;i<=n;i++)
  {
    product=product*i;
  }
  return product;
}