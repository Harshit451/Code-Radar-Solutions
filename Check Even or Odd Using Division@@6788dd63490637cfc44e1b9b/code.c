#include <stdio.h>
int main() {
    int num;
    scanf("%d", &num);
    // Checking even or odd using division logic
    if ((num / 2) * 2 == num) {
        printf("Even\n");
    } 
    else {
        printf("Odd\n");
    }
    return 0;
}
