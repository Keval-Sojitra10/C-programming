#include<stdio.h>
int main(){
    int arr[5]= {23,45,1,6,38};
    int max= -1;
    for(int i=0;i<5;i++){
        if(max<arr[i]){
            max = arr[i];
        }
    }
    printf("%d", max);
    
    return 0;
}