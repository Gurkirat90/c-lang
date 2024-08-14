#include<stdio.h>
#include<string.h>
int main()
{
  char str[100] ={"What the f"};
  int i =0;
while(str[i]!='\0')
{
  if(str[i]>='a'&& str[i]<='z')
  {
    str[i]=str[i]-32;//for lowercase +32 &'A','Z'
  }
i++;
}  printf("%s",str);
return 0;
}