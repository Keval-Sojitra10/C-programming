#include<stdio.h>
int main(){
    int net,gross,allowance,deduction;
    printf("Enter your gross income: ");
    scanf("%d",&gross);

    if (gross>10000){
        allowance = 0.1*gross;
        deduction = 0.03*gross;
        net = gross + allowance - deduction;
    printf("Your net income is: %d",net);
    }
    else if (gross>5000){
        allowance = 0.7*gross;
        deduction = 0.02*gross;
        net = gross + allowance - deduction;
    printf("Your net income is: %d",net);
    }
    else{
        printf("Please enter amount greater than 5000");
    }
    return 0;
}