#include<stdio.h>
int main(){
    int net,gross,allowance,deduction;
    printf("Enter your gross income: ");
    scanf("%d",&gross);
    allowance = 0.1 * gross;
    deduction = 0.03 * gross;
    net = gross + allowance - deduction;
    printf("Your net income is: %d",net);
    return 0;
}