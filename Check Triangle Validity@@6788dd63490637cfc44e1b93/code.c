#include<stdio.h>
int main(){
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if(a+b>c && c+b>a && c+a>b){
        printf("Valid");
    }
    else{
        printf("Invalid");
    }
    return 0;
}