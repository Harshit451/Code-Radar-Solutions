#include<stdio.h>
int main(){
    int a,b,c;
    scanf("%d %d d", &a, &b, &c);
    if(a==b==c){
        printf("Equilateral\n");
    }
    else if(a==b!=c){ //|| a!=b==c || a==c!=b){
        printf("Isosceles\n");
    }
    else if(a!=b!=c){
        printf("Scalene\n");
    }
    return 0;
}