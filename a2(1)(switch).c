#include <stdio.h>
#include<math.h>

int main ()
{
    printf("list of mathematical funtions is given below\n");
    printf("1. Sine (sin)\n");
    printf("2. cosine (cos)\n");
    printf("3. logarithum (log)\n");
    printf("4. power (pow)\n");
    printf("5. square root (sqrt)\n");
    printf("6. Exit\n");

    while(1)
    {
        int choice;
        double x,y,result;
        printf("enter any choice between (1-6):\n");
        scanf("%d",&choice);
        
        if (choice>6)
        {
            printf("you have entered the value out of range\n");
        }
        if (choice ==0){
            printf("really niggaa\b\n");
        }

            if(choice==6)
        {
            printf("exiting the program,see you\n");
            break ;
        }

        printf("enter the value of x = \n");
        scanf("%lf",&x);

        switch(choice)
        {

            case 1:
                result = sin(x);
                printf("sin(%.2lf) = %.2lf\n",x,result);
                break;

            case 2:
                result = cos(x);
                printf("cos(%.2lf) = %.2lf\n",x,result);
                break;

            case 3:
                result = log(x);
                printf("log(%.2lf)= %.2lf\n",x,result);
                break;

            case 4:
                printf("enter the exponent y=\n");
                scanf ("%lf",&y);
                result = pow(x,y);

                printf("%.2lf^%.2lf = %.2lf\n",x,y,result);
                break;

            case 5:
                result = sqrt(x);
                printf("sqrt(%.2lf) = %.2lf\n",x,result);
                break;

            default :
                printf("try again later");
            

        }



    }



    return 1;



}
