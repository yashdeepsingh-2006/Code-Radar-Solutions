#include <stdio.h>

int isPrime(int num) {
    if (num <= 1) {
        return 0; // 0 and 1 are not prime numbers
    }
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return 0; // num is divisible by i, so it's not prime
        }
    }
    return 1; // num is prime
}

int main() {
    int number; // Corrected line: added semicolon
    scanf("%d", &number);

    if (isPrime(number)) {
        printf("Prime");
    } else {
        printf("Not Prime");
    }

    return 0;
}
