#include<stdio.h>
#include<stdbool.h>
//goes for sorted and un-sorted series
int main()
{
    int n,x;
    bool flag = false;
    printf("enter the size of an array:");
    scanf("%d",&n);
    printf("enter the number to be searched");
    scanf("%d",&x);
    printf("---------------------\n");
    int a[n],i;
    for(i=0;i<=n-1;i++)
    {
         printf("ENTER THE VALUE OF %d ELEMENT=\n",i+1);
         scanf("%d",&a[i]); 
         printf("------\n");
    }
    printf("---------------------\n");
    for(i=0;i<=n-1;i++)
    {
         printf("%d\n",a[i]);
    }
    printf("---------------------\n");

        for(i=0;i<n;i++)
        {
            if(a[i]==x)flag = true;
        }

    if(flag ==false)printf("no record found");
    else printf("%d id found at %d position",x,i);
 
 }