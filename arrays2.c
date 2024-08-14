#include<stdio.h>
int main()
{
    int a[5],i;
    
    for(i=0;i<=4;i++)
    {
        printf("ENTER THE VALUE OF %d ELEMENT=\n",i+1);
        scanf("%d",&a[i]);
        
    }
    for(i=0;i<=4;i++)
    {
        if(a[i]>9)
        printf("=%d\n",i);
    }

    return 0;

}