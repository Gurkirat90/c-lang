//swap 2 numbers with the help of pointers\
//(PASS BY REFERENCE)
#include<stdio.h>
int swap(int* x, int* y)
{
    int temp;
    temp = *x;
    *x =*y ;//a= value of b
    *y = temp;//b = value of a
  return 0;
}
int main()
{
  int A,B;
  printf("Assign value to A:");
  scanf("%d",&A);
  printf("Assign value to B:");
  scanf("%d",&B);
  swap(&A,&B);
  printf("new A =%d\nnew B =%d\n",A,B);

 return 0;
}

