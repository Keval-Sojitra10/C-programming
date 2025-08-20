#include<stdio.h>
int main(){
    int a,b;
    printf("Enter currency in dollars:");
    scanf("%d",&a);
    b = a*48;
    printf("Currency in rupees is %d",b);
    return 0;
}