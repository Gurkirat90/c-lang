#include<stdio.h>
int fib(int n){
    int a=0,b=1,c;
    for(int i=0;i<=n-1;i++)
    {
        printf("%d,",a);
        c=a+b;
        a=b;
        b=c;
    }
    return 0;

}
int main()
{
    int  n;
    printf("enter number upto which you want fibonacci numbers:");
    scanf("%d",&n);
    fib(n);
}

