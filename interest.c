#include<stdio.h>
int main(){
    int P,R,N,I;
    printf("Enter the Principle amount:");
    scanf("%d",&P);
    printf("Enter the rate of interest:");
    scanf("%d", &R);
    printf("Enter the time period:");
    scanf("%d",&N);
    I=P*R*N/100;
    printf("Interest is %d",I);
    return 0;
}