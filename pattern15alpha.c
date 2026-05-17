#include<stdio.h>
int main(){
    int n;
    printf("Enter no.:");
    scanf("%d", &n);
    //int k=65;
    for(int i=1;i<=n;i++){
        int k=65;
        for(int j=1;j<=n;j++){
            int a=i+j;
            if(a>= n+1){
                printf("%c", k);
                k++;
            }
            else printf(" ");
        }
        printf("\n");
    }

    return 0;
}