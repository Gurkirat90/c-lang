#include<stdio.h>
int main()
{
    int a[5],i;
    
    for(i=0;i<=4;i++)
    {
        printf("ENTER THE VALUE OF %d ELEMENT=\n",i+1);
        scanf("%d",&a[i]);
        
    }
    for(i=4;i>=0;i--)
    {
     
        printf("=%d\n",a[i]);
    }

    return 0;

}