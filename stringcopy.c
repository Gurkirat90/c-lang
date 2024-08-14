 #include<stdio.h>
#include<string.h>
// int main
// {
//     char s1[] = "code and code";
//     char *s2 =s1;//s2 is a shallow copy
//     s1[0] ='m';
//     printf("%s",s2);
//     return 0;
// }

// By  deep copy

int main(){
    char s1[] = "code and code";
    char s2[] = "code and code";//deep copy
    s1[0] ='m';
    printf("%s/n",s1);
    printf("%s/n",s2);

    return 0;

}