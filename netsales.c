#include<stdio.h>
int main(){
    int net, gross, discount;
    printf("Enter the gross sales:");
    scanf("%d", &gross);
    printf("Enter the discount rate:");
    scanf("%d", &discount);
    discount = 0.1*gross;
    net = gross - discount;
    printf("Net sales: %d", net);
    return 0;
}