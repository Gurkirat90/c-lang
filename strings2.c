//size of string = apparant size +1
#include<stdio.h>
#include<string.h>//impotant for strings

int main()
{
    char str[100];
    puts ("Enter a string");//printf
    // gets (str);(scanf)
    //gets will give an error here so,
    scanf("%[^\n]s",str);
    //size
    int size = 0;
    int k=0;
    while(str[k]!= '\0'){
        size++;
        k++;
    }
    //reversing
    for (int i= 0,j=size-1; i<=j ; i++, j--){
        char temp =str[i];
        str[i]=str[j];
        str[j] = temp;
    }
    puts("The reverse is :");//automatically gives a \n
    puts(str);
}