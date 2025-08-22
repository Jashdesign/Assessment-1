#include <stdio.h>

int main() {
    printf("Prime numbers between 1 and 100 are:\n");

    for (int num = 1; num <= 100; num++) {

        int isPrime = 1; // assume prime

        // check divisibility
        for (int i = 2; i < num; i++) {
            if (num % i == 0) {
                isPrime = 0; // not prime
                break;
            }
        }

        if (isPrime) {
            printf("%d ", num);
        }
    }

    return 0;
}