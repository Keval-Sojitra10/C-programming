#include<stdio.h>
int main(){
    int L,B,A,P;
    printf("Enter length of rectangle:");
    scanf("%d",&L);
    printf("Enter breadth of rectangle:");
    scanf("%d",&B);
    A=L*B;
    printf("Area of rectangle is: %d\n",A);
    P=2*(L+B);
    printf("Perimeter of rectangle is: %d\n",P);
    
    return 0;
}