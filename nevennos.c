#include<stdio.h>
int main(){
    int i=1,n,num=2;
    printf("Enter a value:");
    scanf("%d", &n);

    while(i<=n){
        printf("%d\n", num);
        num+=2;
        i++;
    }
    return 0;
}