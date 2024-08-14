#include<stdio.h>
#include<string.h>
int main()
{
    struct marvel{
        char superpower[99];
        int power;
        int speed;
        int endurance;
        int health;
    }loki;
    strcpy(loki.superpower,"tricry");
    printf("enter the speed level of loki : ");
    scanf("%d",& loki.speed);
    loki.health = 95;
    loki.power = 50;
    loki.endurance = 30;

    struct marvel hulk;
    strcpy(hulk.superpower, "super strenght");
    hulk.power = 95;
    hulk.speed =65;
    hulk.health = 80;
    hulk.endurance = 99;
    printf("%s",loki.superpower);
    printf("\n%d",hulk.power);
    return 0;

}