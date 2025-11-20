#include<stdio.h>
int  main(){
    int arr[5]= {-3,-5,-6,-2,-10};
    int max=arr[0];
    for(int i=0;i<=4;i++){
        if(max<arr[i])
        max= arr[i];
    }
    printf("Max value in array is %d", max);
    return 0;
}