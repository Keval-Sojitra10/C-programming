#include<stdio.h>
int main(){
    int units,Total;
    printf("Enter no. of units consumed:");
    scanf("%d", &units);

    if (units<=100){
        Total= 1.5*units;
        printf("Your bill is %d", Total);
    }
    else if (units<=300){
        Total= units*2.5;
        printf("Your bill is %d", Total);
    }
    else if (units>300){
        Total= units*4;
        printf("Your bill is %d", Total);
    }
    else{
        printf("Invalid entry");
    }

    return 0;
}