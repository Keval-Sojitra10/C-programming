#include<stdio.h>
int main(){
    // FILE *ptr= fopen("test.txt", "r");
    // char str[100];
    // while(fgets(str,100,ptr)!=NULL)
    // printf("%s", str);
    FILE *ptr= fopen("Open.txt", "w");
    char str[]="I am opening and writing a file.";
    fputs(str,ptr);
    fclose(ptr);
    return 0;
}