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
        printf("Positive\n");
    } 
    else if (num < 0) {
        printf("Negative\n");
    } 
    else {
        printf("Zero\n");
    }
    return 0;
}
