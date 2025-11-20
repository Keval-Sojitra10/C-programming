#include<stdio.h>
int add(int x, int y){
        return x + y;
    }
int prod(int p, int q){
        return p * q;
    }
int main(){
    int a,b;
    printf("Enter 2 values:");
    scanf("%d %d", &a, &b);
    int sum = add(a,b);
    int product = prod(a,b);
    printf("%d  %d", sum,product);
    return 0;
}