#include<stdio.h>
int main(){
    double a,b;
    char sign;
    scanf("%lf %lf %c",&a,&b,&sign);
    if(sign== '+'){
        printf("%lf",a + b);
    }
    else if(sign== '-'){
        printf("%lf",a - b);
    }
    else if(sign== '*'){
        printf("%lf",a * b);
    }
    else if(sign== '/'){
        printf("%lf",a / b);
    }
    else{
        printf("Error");
    }
    return 0;
}