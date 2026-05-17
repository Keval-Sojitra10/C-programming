#include<stdio.h>
int main(){
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    int sum1=0,sum2=0;
    for(int i=0;i<10;i++){
        if(i%2!=0){
        sum1= sum1+arr[i];}
        else sum2= sum2+arr[i];
    }
    int diff = sum1 - sum2;
    printf("Difference of both sums is %d", diff);
return 0;
}