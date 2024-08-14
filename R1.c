#include <stdio.h>
// void printNumbers(int n) {
//     if (n == 0) 
//     return;
//   else 
//   {
//     printNumbers(n - 1);
//      printf("%d ", n);
//   }
// }OR

void printNumbers(int n) {
    if (n > 0) {
        printNumbers(n - 1);
        printf("%d ", n);
        //printNumbers(n - 1);//to print n to 1
    }
}

int main() {
    int n;
    printf("Enter a positive integer n: ");
    scanf("%d", &n);
    printf("Numbers from 1 to %d: ", n);
    printNumbers(n);
    return 0;
}
//factorial
// void p(int n){
//   if(n!=1)return;
//   else printf("\b=");
// }
// int fact(int n) {
//     if (n <= 0)
//     return 1;
//   else 
//   {
//     printf("%d*",n);
//     p(n);
//     return n*fact(n-1);
//   }
// }
// int main() {
//     int n;
//     printf("Enter a positive integer n: ");
//     scanf("%d", &n);
//     printf("factorial of %d: ", n);
//   printf("%d",fact(n));
//     return 0;}