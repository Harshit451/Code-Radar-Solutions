#include<stdio.h>
int main(){
    int cost price,selling price;
    scanf("%d %d", &selling price , &cost price);
    if(cost price < selling price){
        printf("Profit");
    }
    else if(cost price > selling price){
        printf("Loss");
    }
    else if(cost price == selling price){
        printf("No Profit No Loss");
    }
    else{
        printf("Invalid Input");
    }
    return 0;
}