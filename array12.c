#include<stdio.h>
int main(){
    int arr[7]={1,2,3,2,5,6,7,};
    int x = arr[0];
    for(int i=1;i<7;i++){
        for(int j=i+1; j<7;j++){
            if(arr[i] == arr[j]){
                printf("Duplicate element is %d", arr[i]);
                break;
            }
        }
    }
return 0;
}