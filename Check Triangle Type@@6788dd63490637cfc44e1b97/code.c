#include<stdio.h>
int main(){
    int a,b,c;
    scanf("%d %d %d", &a, &b, &c);
    if(a==b && b==c){
        printf("Equilateral\n");
    }
    else if(a==b || a==c || c==b){
        printf("Isosceles\n");
    }
    else if(a!=b!=c){
        printf("Scalene\n");
    }
    return 0;
}