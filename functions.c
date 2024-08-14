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

void fun(pokemon p){
  printf("%d",p.hp);
}
int main(){
  pokemon pikachu;
  pikachu.hp =100;
  fun(pikachu);
  return 0;
}