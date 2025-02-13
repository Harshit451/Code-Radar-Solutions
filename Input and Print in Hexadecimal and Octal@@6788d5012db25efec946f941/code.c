#include <stdio.h>

int main() {
    int num;

    // Input in hexadecimal
    printf("Enter a hexadecimal number: ");
    scanf("%x", &num);  // User enters hex (e.g., "1A")

    // Output in hexadecimal
    printf("Hexadecimal (lowercase): %x\n", num);
    printf("Hexadecimal (uppercase): %X\n", num);

    return 0;
}
