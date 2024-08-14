#include <stdio.h>

int isPrime(int n) ;
{
    if (n <= 1) {
        return 0; // 0 and 1 are not prime
    }
    
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return 0; // If n is divisible by any number between 2 and sqrt(n), it's not prime
        }
    }
    
    return 1; // If no divisors were found, n is prime
}

int main() 
{
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);
    
    if (isPrime(num)) {
        printf("%d is a prime number.\n", num);
    } else {
        printf("%d is not a prime number.\n", num);
    }
    
    return 0;
}