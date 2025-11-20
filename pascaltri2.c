#include<stdio.h>
int factorial(int a){
        int fact = 1;
        for(int i=2;i<=a;i++){
        fact = fact*i;
        }
        return fact;
}
int main(){
    int n,r;
    printf("Enter values of n:");
    scanf("%d", &n);
    for(int i=0; i<=n; i++){
        for(int p=0; p<=n-i;p++){
            printf(" ");
        }
        for(int j=0;j<=i;j++){
            int ifact= factorial(i);
            int jfact= factorial(j);
            int ijfact= factorial(i-j);
            int icj= ifact/(jfact*ijfact);
            printf("%d ", icj);
        }
        printf("\n");
    }
    return 0;
}