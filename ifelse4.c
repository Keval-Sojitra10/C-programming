#include<stdio.h>
int main(){ 
    int a;
    printf("Enter a number:");
    scanf("%d", &a);
    
    if ( a%7==0){
        printf("It is divisible by 7");
    }
    else{
        printf("It is not divisible");
    }
    return 0;
}