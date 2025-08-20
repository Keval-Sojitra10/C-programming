#include<stdio.h>
int main(){
    int a,b,c;
    printf("Enter both numbers:");
    scanf("%d %d", &a , &b);
    c = a - b;
    printf(" %d - %d = %d\n", a, b, c);
    return 0;
}