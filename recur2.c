#include<stdio.h>
void increaser( int n){ // void increaser(int x, int n)
    
    // if(x>n) return;
    // printf("%d ", x);
    // increaser(x+1,n);
    if(n==0) return;    //base case

    increaser(n-1); //call-gets called until =0,then goes through 1-2-3...
    printf("%d ", n); //code
    return;
}
int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    increaser(n); // increaser(1,n)
return 0;
}