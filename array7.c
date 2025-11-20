#include<stdio.h>
int main(){
    int arr[10];
    printf("Enter ages of 10 people:");
    for(int i=0;i<10;i++){
        scanf("%d", &arr[i]);
    }
    for(int i=0;i<10;i++){
        if(arr[i]<18) printf("Not eligible\n");
        else printf("Eligible\n");
    }
    return 0;
}