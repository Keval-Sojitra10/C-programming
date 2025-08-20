#include<stdio.h>
int main(){
    int a,b;
    printf("Enter value in fahrenheit:");
    scanf("%d",&a);
    b = 0.55*(a-32);
    printf("Value in celcius is %d",b);
    return 0;
}