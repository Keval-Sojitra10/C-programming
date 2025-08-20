#include<stdio.h>
int main(){
    float a,b;
    printf("Enter value in grams:");
    scanf("%f",&a);
    b = a/1000;
    printf("Value in kg is %f",b);
    return 0;
}