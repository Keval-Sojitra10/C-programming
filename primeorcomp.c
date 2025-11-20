#include<stdio.h>
int main(){
    int i,n,check=0;
    printf("Enter a number:");
    scanf("%d", &n);

    for(i=2;i<=n/2;i++){
       if( n%i==0)
        check=1;
        }
    
    if (check==0)
    printf("it is prime");
    else
    printf("composite");
    return 0;
}