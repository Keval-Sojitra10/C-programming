#include<stdio.h>
int logpower(int a, int b){
    if(b==0) return 1;
   // if(b==1) return a;
    int x = logpower(a,b/2);
    if(b%2==0) return x*x;
    else return x*x*a;
}
int main(){
    int a,b;
    printf("Enter the base:");
    scanf("%d", &a);
    printf("Enter the power:");
    scanf("%d", &b);
    int p= logpower(a,b);
    printf("a to the power b is %d", p);
    return 0;
}