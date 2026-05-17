#include<stdio.h>
int main(){
    int n,m;
    printf("Enter no. of rows:");
    scanf("%d", &n);
    printf("Enter no. of columns:");
    scanf("%d", &m);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            int a=i+j;
            if(a <=m/2 +1 || a>=m+2){
                printf(" ");
            }
            else printf("*");
        }
        printf("\n");
    }

    return 0;
}