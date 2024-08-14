//array of structures
#include<stdio.h>
#include<stdbool.h>
int main(){
  struct date{
  int date;
  int month;
  int year;
  }a,b,c;

  a.date = 1;
  a.month =1;
  a.year =2024;
  
  b.date =17;
  b.month =12;
  b.year  =2023;

   bool flag = true;
  if(a.date!=b.date)flag =false;
  if(a.month!=b.month)flag =false;
  if(a.year!=b.year) flag =false;

  if(flag == true)printf("A,B are equal\n");
  else
    printf("A,B are different\n");
  c=a;
  //if(a.date!=c.date&&a.month!=c.month&&a.year!=c.year) flag =false;
  if(a.date!=c.date)flag =false;
  if(a.month!=c.month)flag =false;
  if(a.year!=c.year) flag =false;

  if(flag == false)printf("A,C are not equal");
  else
    printf("A,C are equal");
  return 0;
}