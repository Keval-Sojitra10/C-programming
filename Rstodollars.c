#include<stdio.h>
int main(){
    int a,b;
    printf("Enter currency in rupees:");
    scanf("%d",&a);
    b = a/48;
    printf("Currency in dollars is %d",b);
    return 0;
}