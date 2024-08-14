#include<stdio.h>
int main ()
{
    
    int x,y, result;

  
    
    printf("1.+=\n");
    printf("2.-=\n");
    printf("3.*=\n");
    printf("4./=\n");
    printf("5.EXIT\n");

    while(4)
    {
        int choice;
        printf("Enter the number between(1-5)=\n");
        scanf("%d",&choice);
        if(choice==0)
        {
            printf("0 is a wrong input,\nEnter value between(1-5)\n");
        }

        if (choice>5)
        {
            printf("This is a wrong input,\nEnter value between(1-5)\n");
        }
        if(choice==5)
        {
            printf("THE PROGRAMMER HOPES THAT YOU HAD A PLEASENT EXPERICENCE\nTHANKYOU");
            break;
        }

        printf("Enter value of x=\n");
        scanf("%d",&x);
        printf("Enter value of y=\n");
        scanf("%d",&y);

        switch(choice)
        {
            case 1:
            result = x+=y;
            printf("Result = %d\n",result);
            break;

            case 2:
            result = x-=y;
            printf("Result = %d\n",result);
            break;

            case 3:
            result = x*=y;
            printf("Result = %d\n",result);
            break;

            case 4:
           result = x/=y;
            printf("Result = %d\n",result);
            break;

            default :
            printf("Try again layer\n");
            break;
        }


    }
}    