#include<stdio.h>
int main(){
    int a,b,c,average;
    printf("Enter sub1 marks:");
    scanf("%d",&a);
    printf("Enter sub2 marks:");
    scanf("%d",&b);
    printf("Enter sub3 marks:");
    scanf("%d",&c);
    average=(a+b+c)/3;
    printf("Average is %d", average);

    return 0;
}