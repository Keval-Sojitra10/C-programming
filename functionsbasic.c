#include<stdio.h>
#include<math.h>
void add(){
    int a=5,b=7,c;
    c=a+b;
    printf("%d + %d= %d\n", a,b,c);

    return;
}
void product(){
    int a=5,b=7,c;
    c=a*b;
    printf("%d * %d= %d\n", a,b,c);
}
int main(){
    add();
    product();
    return 0;
}