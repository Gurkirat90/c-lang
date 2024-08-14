#include<stdio.h>
int main()
{
     int n,i;scanf(" %d",&n);
    int arr[n]; 
    for ( i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    

    for(i=0;i<=n-1;i++)
    {
        for(int j=i+1;j<=n-1;j++)
        {
          if (arr[i]==arr[j])
          {
             for(int k=j;k<=n-1;k++)
            {
                arr[k]=arr[k+1];
                
            }
            n--;
            j--;
          }
        }
    }
 
    printf("\n============================\n");
     for ( i = 0; i < n; i++)
    {
        printf("%d \t", arr[i]);
    }
    return 0;