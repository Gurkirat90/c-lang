#include<stdio.h>
int isprime(int i);
int main()
{
    int  n;
    printf("enter number upto which you want prime numbers:");
    scanf("%d",&n);
    for (int i=0;i<=n-1;i++)
    {
        if(isprime (i))
        {
            printf("\t%d is a prime number\n",i);
        }
    }
}
int isprime(int n)
{
    if(n<=1) return 0;
    for(int i =2;i*i<=n;i++){
        if(n%i==0) return 0;
    }
    return 1;
}