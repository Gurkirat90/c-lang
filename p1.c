 #include<stdio.h>
int main()
{
    // int x=1;
    // int y=1;
    // printf("%p",&x); //address; %p or %u; 
    // printf("\n%p",&y); //address of y (4 bits away)

    int x=1;
    int *p;
    p=&x;//int * =pointer(stores), x= name of ptr
    //p=&x;x is address of a
    *p=7;[//value of a becomes 7 by pointer
    int**y=&p;
    
    printf("\n%p",&x); //address of x
    printf("\n%p",p); //address of x
    printf("\n%p",&*x);//address of x
    printf("\n%p",&p);//address of pointer
    printf("\n%d",x);//value of a
    printf("\n%d",*p);//value of a
    printf("\n%d",**y);//value of a  
    printf("\n%d",*&x);//value of a    
    
    
    return 0; 
}