#include<stdio.h>
int main(){
    int x=5,y=7;
    while(++x<7 && y-->4);
    printf("%d %d\n", x,y);

 //   int a=0;
   // printf("%d\n", (a)?1:0);

    //int a= '0';
   // printf("%d\n", (a)?1:0);
   // return 0;

    int b=4,c=5,d=6,e=7,f;
    f= ++b - c++ * --d +--e;
    printf("%d %d %d %d %d\n", b,c,d,e,f);

    for(int i=1;i<=10;i++);
    printf("%d", i);
       
}