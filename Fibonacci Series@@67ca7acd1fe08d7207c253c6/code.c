#include <stdio.h>

void fibonacciSeries(int n) {
    int a = 0, b = 1, next;

    for(int i = 0; i < n; i++){
        printf("%d",a);
        if(i < n - 1){
            printf(" ");
        }
        next = a + b;
        a = b;
        b = next;

    }
    // printf("Fibonacci Series up to %d: ", n);

    // while (a < n) {
        // printf("%d ", a);
        // next = a + b;  // Compute next Fibonacci number
        // if(next>=n) break;
        // a = b;
        // b = next;
    // }

    printf("\n");
    fibonacciSeries(n);
}

// int main() {
//     int n;
    
//     printf("Enter the value of n: ");
//     scanf("%d", &n);


//     return 0;
// }
