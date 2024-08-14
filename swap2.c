#include<stdio.h>
int swap(int  a, int b);//prototype
int main()
{
  int A,B;
  printf("Assign value to A:");
  scanf("%d",&A);
  printf("Assign value to B:");
  scanf("%d",&B);
  swap(A,B);//calling a function
  
 return 0;
}

int swap(int a, int b)//defination
{
  a=a+b;
  b=a-b;
  a = a-b;
  printf("new A and B are : %d , %d resectively.",a,b); 
  return 0;
}