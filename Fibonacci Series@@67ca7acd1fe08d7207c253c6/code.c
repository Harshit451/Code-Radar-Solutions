// #include <stdio.h>

void fibonacciSeries(int n) {
    int a = 0, b = 1, next;

    // printf("Fibonacci Series up to %d: ", n);

    while (a < n) {
        printf("%d ", a);
        next = a + b;  // Compute next Fibonacci number
        // if(next>=n) break;
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
