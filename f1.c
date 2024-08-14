#include<stdio.h>
//functions
//addition(basics)
int add(int a,int b)//2
{
  return a+b;
}
int main()
{
  int A,B;
  printf("enter the 1st number :");
  scanf("%d",&A);
  printf("enter the 2nd number :");
  scanf("%d",&B);
  printf("%d",add(A,B));
  //1//here add(A,B) is calling the above function
  
 return 0;
}
