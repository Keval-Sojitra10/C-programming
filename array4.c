#include<stdio.h>
int main(){
    int arr[5]= {2,3,5,6,9};
    int product=1;
    for(int i=0; i<5;i++){
        product= product*arr[i];
    }
    printf("product of elements of array is %d", product);
    
    return 0;
}