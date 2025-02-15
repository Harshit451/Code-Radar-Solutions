#include <stdio.h>
int main() {
    int num, i, isPrime = 1;
    scanf("%d", &num);
    // 0 and 1 are not prime numbers
    if (num <= 1) {
        isPrime = 0;
    }
    // Check divisibility from 2 to num/2
    for (i = 2; i <= num / 2; i++) {
        if (num % i == 0) {
            isPrime = 0;
            break;
        }
    }
    if (isPrime) {
        printf("Prime\n");
    } else {
        printf("Not Prime\n");
    }
    return 0;
}