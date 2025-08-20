#include<stdio.h>
int main(){
    float a,b,c,d;
    printf("Enter value in bytes:");
    scanf("%f",&a);
    b = a/1024;
    printf("Value in KB is %f",b);
    c = a/1048576;
    printf("Value in MB is %f",c);
    d = c/1024;
    printf("Value in GB is %f",d);
 
    return 0;
}