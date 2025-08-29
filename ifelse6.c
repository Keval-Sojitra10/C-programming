#include<stdio.h>
int main(){
    int sub1,sub2,sub3,average,total;
    printf("Enter marks of 3 subjects:");
    scanf("%d %d %d", &sub1, &sub2, &sub3);
    
    total = sub1 + sub2 + sub3;
    printf("Total is %d\n", total);
    average = total/3;
    printf("Average is %d\n", average);

    if(sub1<35 || sub2<35 || sub3<35){
        printf("Fail");
    }
    else if(average>=70){
        printf("Distinction");
    }
    else if(average>=60){
        printf("First class");
    }
    else if(average>=50){
        printf("Second class");
    }
    else if(average>=35){
        printf("Third class");
    }
    else{
        printf("Fail");
    }
    return 0;
} 