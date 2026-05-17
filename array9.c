#include<stdio.h>
int main(){
    int arr[8]={1,2,3,4,5,6,7,8};
    int x, totalpairs=0;
    printf("Enter a value");
    scanf("%d", &x);
    
    for(int i=0;i<8;i++){
        for(int j=i+1;j<8;j++){
            if(arr[i]+arr[j]==x)
            totalpairs++;
        }
    }
    printf("Total pairs are %d", totalpairs);
return 0;
}