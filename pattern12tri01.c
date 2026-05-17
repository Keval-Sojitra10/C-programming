#include<stdio.h>
int main(){
    int n;
    printf("Enter no.:");
    scanf("%d", &n);
    // int a;
    // for(int i=1;i<=n;i++){
    //     if(i%2!=0) a=1; //these 2 lines are for starting with 0  or 1
    //     else a=0;
    //     for(int j=1;j<=i;j++){
    //         printf("%d", a);
    //         if(a==0) a=1;//these two lines are for switching
    //         else a=0;
    //     }
    //     printf("\n");
    // }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            if((i+j)%2==0) printf("1"); // it covers i=j condition too
            else printf("0");
        }
        printf("\n");
    }

    return 0;
}