#include<stdio.h>
int main(){
    int marks[10]={38,27,34,89,99,97,99,20,60,80};
    printf("%p\n", &marks[0]);
    printf("%p\n", &marks[1]);
    printf("%p\n", &marks[2]);
    printf("%p\n", &marks[3]);
    printf("%p\n", &marks[4]);
    
    return 0;
}