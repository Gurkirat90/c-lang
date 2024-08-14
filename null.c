#include<stdio.h>
int main()
{
    char a[] ={'h','e','l','l','o','\0'};//this \0 is used as check mark you can also use something like!,`,~,
    //special symbols anything
    char ch = '\0';
    printf("%d",ch);//null character
    int i =0;
    while(a[i]!='\0'){
        printf("%c",a[i]);i++;
    }


    return 0 ;
}