#include<stdio.h>
int main(){
    int a,b;
    printf("Enter time in hours:");
    scanf("%d",&a);
    b = a*60;
    printf("Time in minutes is %d",b);
    return 0;
}