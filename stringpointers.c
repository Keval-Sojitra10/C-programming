#include<stdio.h>
#include<string.h>
int main(){
    char str[]= "Visca Barca";
    char* ptr= &str[0];
    printf("%p", &str[0]);
}