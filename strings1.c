//size of string = apparant size +1
#include<stdio.h>
#include<string.h>//impotant for strings

//input and output of string without loops


//using 'gets(),puts()' 


int main()
{
    char arr[]={"hello ladies and gentlemen\0"};
    arr[0] ='H';
    //with loop
    int i =0;
    while(arr[i]!='\0'){
        printf("%c",i[arr]);
        i++;}
    //without loop
    printf("%s",arr);//string format specifier =%s to print    
    //also
    puts(arr);
    return 0 ;
}