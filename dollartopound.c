#include<stdio.h>
int main(){
    float dollars,rupees,pounds;
    printf("Enter currency in dollars:");
    scanf("%f",&dollars);
    rupees = dollars*48;
    pounds = rupees/70;
    printf("Currency in dollars is %f", pounds);
    return 0;
}