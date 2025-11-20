#include<stdio.h>
void swap(int *a,int *b){
    int temp;
    temp = *a; // temp=a
    *a=*b;//a=b
    *b=temp;//b=a
    return;
}
int main(){
    int a;
    printf("Enter a:");
    scanf("%d", &a);
    int b;
    printf("Enter b:");
    scanf("%d",&b);
    swap(&a,&b);
    printf("Swapped values are %d and %d",a,b);
    return 0;
}