#include<stdio.h>
int main(){
    int i,sum=0,n;
    printf("Enter a value:");
    scanf("%d", &n);

    for(i=1;i<=n;i++){
        sum+=i;
    }
    printf("%d", sum);
    return 0;
}