#include<stdio.h>
int main()
{
   int a[10]={1,-8,-7,0,10,50,100,76,23,-45};
   int i, max =a[0];
   for(i=0;i<10;i++){
      if(a[i]>max) max = a[i];
      }
   printf("%d\n-----------\n",max);
   int smax = a[0];
   for(i=0;i<10;i++){
      if(a[i]!= max && smax<a[i]) smax =a[i];
   }
   printf("%d",smax);
   return 0;
}//same goes for minimum.
