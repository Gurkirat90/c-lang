#include<stdio.h>
int main ()
{
    int a, b , c;
    printf("Enter value of A=\n");
    scanf("%d",&a);


    printf("Enter value of B=\n");
    scanf("%d",&b);
    
    c=a;
    a=b;
    b=c;
    printf("After swapping a=%d,\nb=%d\n",a,b);
    


}

