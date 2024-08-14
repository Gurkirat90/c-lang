#include<stdio.h>
/*
int hcf(int q,int d)
{
  if(q==0)return 0;
  if(d<q)return 0;
  while(1)
  {
    int rem;
    rem = d%q;
    if(rem==0){printf("%d", q );break;}
    else
    {
      d=q;
      q=rem;
      
    }
  }
  return 1;
}
int main()
{
    int d,q;
    printf("dividant=");
    scanf("%d",&d);
     printf("quotient=");
    scanf("%d",&q);
    hcf(q,d);
    return 0;
}
*/ //for lcm  ,using formula a*b/hcf
int min(int x,int y){
  if(x<y)
    return x;
  else 
   return y;
}
int hcf(int a,int b)
{ int hcf;
  for(int i=0;i<=min(a,b);i++)
  {
    if(a%i==0&&b%i==0)
     hcf =i;
  }
 printf("%d",hcf);
  /*for(int i=min(a,b);i>=0;i--)
  {
  if(a%i==0&&b%i==0) 
  hcf =i;
  break;
  }*/
}
int main()
{
  int a ,b;
  printf("enter the value of a =");
  scanf("%d",&a);
  printf("enter the value of b =");
  scanf("%d",&b);
  printf("hcf is = ");
  hcf(a,b);
return 0;
}