// #include<stdio.h>
// int main(){
//     int a;
//     scanf("%d",&a);
//     if(a>0){
//         printf("Positive");
//     }
//     else if(a<0){
//         printf("Negative");
//     }
//     else{
//         printf("Zero");
//     }
//     return 0;
// }

#include <stdio.h>
int main() {
    double num;
    scanf("%lf", &num);
    if (num > 0) {
        printf("%.2lf is Positive\n", num);
    } 
    else if (num < 0) {
        printf("%.2lf is Negative\n", num);
    } 
    else {
        printf("The number is Zero\n");
    }
    return 0;
}
