#include<stdio.h>
int main(){
    int R,A,P;
    printf("Enter radius of circle:");
    scanf("%d",&R);
    A=R*R*3.14;
    printf("Area of circle is: %d\n",A);
    P=2*3.14*R;
    printf("Perimeter of circle is: %d\n",P);
    
    return 0;
}