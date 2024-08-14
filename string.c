#include<stdio.h>
int main()
{

    char a[] ={'h','e','l','l','o',};
    //more simple wat to write this is
    char a1[]={"hello"};
    //practical work
    char arr[]={"hello ladies and gentlemen\0"};
    //without \0 in above line (! in while loop) will also work 
    //computer automatically put /0 in end in char arr[]
    int i =0;
    while(arr[i]!='\0'){
        printf("%c",arr[i]);
        i++;
    }
    return 0 ;
}