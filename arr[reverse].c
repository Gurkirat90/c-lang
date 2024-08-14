#include<stdio.h>
int main()
{
    int n,i;
    printf("enter the size of an array:");
    scanf("%d",&n);
    int a[n];
  for(i=0;i<=n-1;i++)
    {
      printf("ENTER THE VALUE OF %d ELEMENT=\n",i+1);
      scanf("%d",&a[i]);
    }
  for(i=0;i<=n-1;i++)
    {
      printf("%d\t",a[i]);
    } 
  printf("\n---------\n");
  
  for(i=n-1;i>=0;i--){
  printf("%d\t",a[i]);}
   
  return 0;
}