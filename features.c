//features of structures
#include<stdio.h>
#include<stdbool.h>
#include<string.h>
int main()
{
  typedef struct pokemon{
  int hp;
  int health;
  int attack;
  char tier;
  char name[99] ;
  }pokemon;

  
  typedef struct legendarypokemon{
  pokemon normal;//this will be upperstruct named pokemon
  char ability[99];
  }legenadarypokemon;

  typedef struct godpokemon{
  legenadarypokemon legend;
  int specialattack;
}godpokemon;
  
  legenadarypokemon charizard;
  strcpy(charizard.ability,"legendary fire");
  charizard.normal.hp=1000;
  charizard.normal.health =1000;
  strcpy(charizard.normal.name,"charizard");
  charizard.normal.attack=999;
  charizard.normal.tier ='A';

  godpokemon areceus;
  strcpy(areceus.legend.ability,"turns into stone");
  areceus.legend.normal.hp =10000;

}