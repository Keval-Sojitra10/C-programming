#include<stdio.h>
int maze(int cr,int cc,int er,int ec){
    int downWays = 0;
    int rightWays =0;
    if(cr==er && cc==ec) return 1;
    if(cr==er)//only right possible
    rightWays+= maze(cr,cc+1,er,ec);
    if(cc==ec)//only down possible
    downWays+= maze(cr+1,cc,er,ec);
    if(cr<er && cc<ec){
     rightWays+= maze(cr,cc+1,er,ec);
     downWays+= maze(cr+1,cc,er,ec);
    }
    int TotalWays= downWays +  rightWays;
    return TotalWays;
}
int main(){
    int n,m;
    printf("Enter the no. of rows:");
    scanf("%d", &n);
    printf("Enter the no. of columns:");
    scanf("%d", &m);
    int NoofWays= maze(1,1,n,m);
    printf("%d", NoofWays);
    return 0;
}