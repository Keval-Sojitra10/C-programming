#include<stdio.h>
int main(){
    int a,b;

    printf("Enter values of a and b:");
    scanf("%d %d", &a, &b);

    if( a>b){
        printf("Largest number is %d",a);
    }
    else if(a<b){
        printf("Largest number is %d",b);
    }
    else{
        printf("Both are equal");
    }
    return 0;
}
