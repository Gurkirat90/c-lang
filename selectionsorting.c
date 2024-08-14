#include<stdio.h>//you can sort in acendind or decending or find n th man or min no.
void sort(int [],int );
int main()
{
    int n;

    printf("enter the size of an array:");
    scanf("%d",&n);
    int a[n],i,temp ;
  for(i=0;i<=n-1;i++){
    printf("enter the %d element:",i+1);
  scanf("%d",&a[i]);
}

  printf("\n-------------------------------\n" );
  for(i=0;i<=n-1;i++)
  {
    printf("%d\t",a[i]);
  }
  printf("\n-------------------------------\n" );
    printf("sorted thing is\n" );
    sort(a,n);
    for(i=0;i<=n-1;i++) printf("\nA[%d]=%d",i,a[i]);}
void sort(int a[], int n)
{
  int i , j,pos, min;
  for(i=0;i<=n-1;i++)
  {
  pos =i;
    min = a[i];
    for(j=i+1;j<n;j++)
    {
    if(a[j]<min)
      {
       min =a[j];
       pos =j;
      }
      a[pos]=a[i];
      a[i]=min;
    }

   }
}
