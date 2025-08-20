#include<stdio.h>
int main(){
    int H,L,A;
    printf("Enter height of triangle:");
    scanf("%d",&H);
    printf("Enter length of triangle:");
    scanf("%d",&L);
    A=(H*L)/2;
    printf("Area of triangle is: %d",A);
    return 0;
}