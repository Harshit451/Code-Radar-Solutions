// #include <stdio.h>

void fibonacciSeries(int n) {
    int a = 0, b = 1, next;

    // printf("%d", n);

    while (a <= n) {
        printf("%d ", a);
        next = a + b;  // Compute next Fibonacci number
        a = b;
        b = next;
    }

    printf("\n");
}

// int main() {
//     int n;
    
//     printf("Enter the value of n: ");
//     scanf("%d", &n);

//     fibonacciSeries(n);

//     return 0;
// }
