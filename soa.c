//array of structures
#include<stdio.h>
#include<string.h>
int main(){
  typedef struct pokemon{
  int hp;
  int health;
  char tier;
  char name[99] ;
  }pokemon;

  pokemon arr[10];


  strcpy(arr[1].name,"pikachu");
  arr[1].hp = 390;
  arr[1].health =140;
  arr[1].tier = 'A';

  strcpy(arr[0].name,"whatever");
  arr[0].hp = 100;
  arr[0].health =150;
  arr[0].tier = 'a';

  strcpy(arr[2].name,"piu");  
  arr[2].hp = 101;
  arr[2].health =199;
  arr[2].tier = 's';
  for(int i=0;i<3;i++){
    printf("this the %d\n",i+1);
    printf("%s\n",arr[i].name);
    printf("%d\n",arr[i].hp);
    printf("%d\n",arr[i].health);
    printf("%c\n",arr[i].tier);
    printf("======================\n");
  }
  return 0;
}