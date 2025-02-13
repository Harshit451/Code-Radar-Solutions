#include <stdio.h>

int main() {
    int num;
    scanf("%d", &num);

    // Output in hex and octal
    printf("Hexadecimal: %x\n", num);  // Lowercase hex
    printf("Hexadecimal: %X\n", num);  // Uppercase hex
    printf("Octal: %o\n", num);        // Octal

    return 0;
}
