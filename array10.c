#include<stdio.h>
int main(){
    int arr[5]= {23,45,1,6,38};
    int max= arr[0];
    int secondmax = arr[0];
    for(int i=0;i<5;i++){
        if(max<arr[i]){
            max = arr[i];
        }
    }
    for(int i=0;i<5;i++){
        if(arr[i]!=max && secondmax<arr[i]){
            secondmax = arr[i];
        }
    }
    printf("%d", secondmax);
    return 0;
}