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
    printf("Enter values of n and r:");
    scanf("%d %d", &n, &r);
    
    int nfact= factorial(n);//n!
    int rfact= factorial(r);//r!
    int nrfact= factorial(n-r); //(n-r)!
    
    int ncr= nfact/(rfact*nrfact);
    printf("%d", ncr);
    return 0;
}

// for (int i=n; i>=1;i--){
    //    nfact = nfact*i; }
   // for (int k=r; k>=1;k--){
    //    rfact = rfact*k; }
    // for (int k= n-r; k>=1;k--){
    //     nrfact = nrfact*k;}