#include<stdio.h>
int main(){
    int marks[10]={38,27,34,89,99,97,99,20,60,80};
    printf("Following roll numbers are failed:");
    for(int i=0;i<10;i++){
        if(marks[i]<35){
            printf("%d ", i);
        }
        else{};
    }

    
    return 0;
}