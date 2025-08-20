#include<stdio.h>
int main(){
    float a,b;
    printf("Enter temperature in celcius :");
    scanf("%f",&a);
    b = (a*1.8)+32;
    printf("Value in Fahrenheit is %f",b);
    return 0;
}