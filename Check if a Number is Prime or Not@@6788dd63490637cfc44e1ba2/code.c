#include <stdio.h>
//#include <math.h>
int main(){
    int n;
    int not_prime = 0;
    if (n < 2)
    {
        not_prime = 1;
    }
    else
    {
        for (int i = 2; i * i <= n; i++)  // Loop until sqrt(n)
        {
            if (n % i == 0)
            {
                not_prime = 1;
                break;
            }
        }
    }
    if (not_prime)
        printf("%d is not prime\n", n);
    else
        printf("%d is prime\n", n);
    return 0;
}
