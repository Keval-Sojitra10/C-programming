#include<stdio.h>
int main(){
    char str[100];
    int length =0;
    fgets(str,100,stdin);
    for(int i=0;str[i]!=0;i++){
        length++;
    }
    //reverse string
    for(int i= length-1;i>=0;i--){
        printf("%c", str[i]);
    }
    return 0;
}