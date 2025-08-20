#include<stdio.h>
int main(){
    int x,y,a,b,c,d;
    printf("Enter the first number: ");
    scanf("%d", &x);
    printf("Enter the second number: ");
    scanf("%d", &y);

    a = x + y;
    print("Sum of %d and %d is %d", x, y, a);
    b = x - y;
    print("Subtraction of %d and %d is %d", x, y, b);
    c = x * y;
    print("Product of %d and %d is %d", x, y, c);
    d = x / y;
    print("Division of %d and %d is %d", x, y, d);

    return 0;
}