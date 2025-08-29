#include<stdio.h>
int main(){
    int net,gross,discount;
    printf("Enter gross sales:");
    scanf("%d", &gross);

    if (gross>20000){
        discount = 0.15*gross;
        net = gross - discount;
        printf("Net sales are %d", net);
    }
    else if(gross>10000){
        discount = 0.1*gross;
        net = gross - discount;
        printf("Net sales are %d", net);
    }
    else{
        discount = 0.05*gross;
        net = gross - discount;
        printf("Net sales are %d", net);
    }
    return 0;

}