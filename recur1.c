#include<stdio.h>
void decreaser(int n){
    if(n==0) return;
    printf("%d ", n);
    decreaser(n-1);
}
int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    decreaser(n);
return 0;
}