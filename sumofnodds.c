#include<stdio.h>
int main(){
    int i,n,sum=0;
    printf("Enter a value:");
    scanf("%d", &n);

    for(i=1; i<=n; i++){
        sum+=2*i-1;
    }
    printf("%d", sum);
    return 0;
}