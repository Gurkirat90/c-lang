#include<stdio.h>
int main()
{
    int a[],i,max,n;

    printf("enter the size of an array:%d",n);
    scanf("%d",&n);

    for(i=0;i<=n-1;i++)
    {
        printf("ENTER THE VALUE OF %d ELEMENT=\n",i+1);
        scanf("%d",&a[n]);

    }
    for(i=n-1;i>=0;i--)
    {
        printf("=%d\n",a[n]);
    }
    max = a[0];
    for(i=0;i<=n-1;i++)
    {
        if(max<a[n])

        {
            max=a[i];
            printf("%d",max);
        }

    }




    return 0;

}