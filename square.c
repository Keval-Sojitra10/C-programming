#include<stdio.h>
int main(){
    int L,A,P;
    printf("Enter the length:");
    scanf("%d",&L);
    A = L*L;
    printf("Area of square is %d\n",A);
    P = L*4;
    printf("Perimeter of square is %d",P);
    return 0;
}