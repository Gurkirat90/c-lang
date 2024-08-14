#include<stdio.h>
 typedef float realnumber;
typedef float* pointer;
 int main()
 {
   realnumber x = 5.6,y;
   pointer a = &x,b=&y;
   printf("%p\n%p\n",a,b);
   printf("%.2f",x);

 }