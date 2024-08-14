#include<stdio.h>
int main()
{
    int n1,n2,i;
    printf("enter no. of n1,n2\n");
    scanf("%d\t%d",&n1,&n2);
    int arr1[n1],arr2[n2],arr[n1+n2];
    for( i=0;i<=n1-1;i++)
    {
        printf("ENTER THE VALUE OF %d ELEMENT=\n",i+1);
        scanf("%d",&arr1[i]);
        arr[i]=arr1[i];


    }
  printf("=======================\n");
  printf("2nd array\n");
    for(int j=0;j<=n2-1;j++)
    {
        printf("ENTER THE VALUE OF %d ELEMENT=\n",i+1);
        scanf("%d",&arr2[j]);
        arr[i]=arr2[j];
      i++;


    }
    for(int i=0;i<=n1+n2;i++)
    {
        printf("%d\t",arr[i]);
    }



 return 1;
}