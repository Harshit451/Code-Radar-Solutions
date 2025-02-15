// #include<stdio.h>
// int main(){
//     int a,b;
//     char sign;
//     scanf("%d %d %c",&a,&b,&sign);
//     if(sign== '+'){
//         printf("%d",a + b);
//     }
//     else if(sign== '-'){
//         printf("%d",a - b);
//     }
//     else if(sign== '*'){
//         printf("%d",a * b);
//     }
//     else if(sign== '/'){
//         if(b!=0){
//             printf("%d",a / b);
//             }
//             else{
//                 printf("error");
//             }
//     }
//     // else{
//     //     printf("error");
//     // }
//     return 0;
// }



// By Switch
#include <stdio.h>
int main() {
    int a, b;
    char sign;
    scanf("%d %d %c", &a, &b, &sign);
    switch (sign) {
        case '+':printf("%d", a + b);break;
        case '-':printf("%d", a - b);break;
        case '*':printf("%d", a * b);break;
        case '/':if (b != 0)printf("%d", a / b);elseprintf("error");break;
        default:printf("error"); 
    }
    return 0;
}