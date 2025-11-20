#include<stdio.h>
int main(){
    char str[50];
    int length=0;
    printf("enter a string");
    gets(str);
    for(int i=0;str[i]!='\0';i++){
    length++;
    }
    printf("Your string length is: %d", length);
    //lwr to uppercase
    for(int i=0;str[i]!='\0';i++){
        if(str[i]>='a' && str[i]<='z'){
        printf("%c", str[i]-32);}
        else printf("%c", str[i]);
    }
    //upr to lwrcase
    for(int i=0;str[i]!='\0';i++){
        if(str[i]>='A' && str[i]<='Z'){
        printf("%c", str[i]+32);}
        else printf("%c", str[i]);
        }
        //toggle case
    for(int i=0;str[i]!=0;i++){
        if(str[i]>='a' && str[i]<='z'){
        printf("%c", str[i]-32);}
        else if (str[i] >= 'A' && str[i] <= 'Z'){
            printf("%c", str[i] + 32);}
        else
            printf("%c", str[i]);}       
    return 0;
}