#include<stdio.h>//you can sort in acendind or decending or find n th man or min no.
int main()
{
    int n;

    printf("enter the size of an array:");
    scanf("%d",&n);
    
    int a[n],i,temp ;
    for(i=0;i<=n-1;i++)
    {
        printf("ENTER THE VALUE OF %d ELEMENT=\n",i+1);
        scanf("%d",&a[i]);
        
    }
    for(i=n-1;i>=0;i--)
    {
        printf("=%d\n",a[i]);
    }
    for(i=0;i<=n-1;i++)
    {for(int j=i+1;j<n;j++)
     {
          if(a[i]>a[j])
            {
                 temp =a[i];
                a[i] = a[j];
                a[j] = temp;

            }
     }
    }
    for(i=0;i<=n-1;i++){ printf("%d\n",a[i]);}

    return 0;
}