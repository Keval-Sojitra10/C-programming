#include<stdio.h>
int main(){
    int a,b,c;
    printf("Enter 3 numbers:");
    scanf("%d %d %d", &a,&b,&c);

    if ( a>b && a>c){
        printf("Largest number is %d", a);
    }
    else if ( b>a && b>c){
        printf("Largest number is %d", b);
    }
    else if( a<c && b<c){
        printf("Largest number is %d", c);
    }
    else{
        printf("All numbers are equal");
    }
    return 0;
}