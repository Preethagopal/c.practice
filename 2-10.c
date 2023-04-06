#include <stdio.h>

int main() {
    int num, i, isPrime = 1;
    
    printf("Enter a positive integer: ");
    scanf("%d", &num);
    
    // Check if num is divisible by any number between 2 and num/2
    for(i = 2; i <= num/2; i++) {
        if(num % i == 0) {
            isPrime = 0;
            break;
        }
    }
    
    if(isPrime == 1) {
        printf("%d is a prime number.\n", num);
    }
    else {
        printf("%d is not a prime number.\n", num);
    }
    
    return 0;
}