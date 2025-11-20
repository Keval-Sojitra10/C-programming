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
        for(int j=0;j<=i;j++){
            int ifact= factorial(i);
            int jfact= factorial(j);
            int ijfact= factorial(i-j);
            int icj= ifact/(jfact*ijfact);
            printf("%d ", icj);
        }
        printf("\n");
    }
    
    int nfact= factorial(n);//n!
    int rfact= factorial(r);//r!
    int nrfact= factorial(n-r); //(n-r)!
    
    int ncr= nfact/(rfact*nrfact);
    printf("%d", ncr);
    return 0;
}