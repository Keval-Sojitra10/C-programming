#include<stdio.h>
void increaser( int n){ 
    
    if(n==0) return;    //base case
    printf("%d ", n);
    increaser(n-1); //call-gets called until =0,then goes through 1-2-3...
    printf("%d ", n); //code
    return;
}
int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    increaser(n); 
return 0;
}