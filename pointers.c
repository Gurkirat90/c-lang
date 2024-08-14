#include<stdio.h>
#include<string.h>
#include<stdbool.h>
typedef struct pokemon{
int hp;
int speed;
int attach;
char tier;
char name [99];
}pokemon;
void change(pokemon *p){
  (*p).hp=90;
  //or
  p->hp =80;
}
int main(){
  pokemon pikachu;
  pikachu.hp=89;

pokemon* electric=&pikachu;
  printf("%p\n",electric);
   //(*electric).hp=90;
  //or
  change(electric);
  printf("%d",pikachu.hp);
  return 0;
}