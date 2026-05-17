#include<stdio.h>
#include<string.h>
struct address{
    int houseNo;
    int blockNo;
    char city[50];
    char state[50];
};
void printadd(struct address adds){
    printf("Address is: ");
    printf("%d, %d, %s, %s\n", adds.houseNo,adds.blockNo,adds.city,adds.state);
}
int main(){
    struct address adds[5];
    //input
    printf("Enter address for person 1:\n");
    scanf("%d", &adds[0].houseNo);
    scanf("%d", &adds[0].blockNo);
    scanf("%s", &adds[0].city);
    scanf("%s", &adds[0].state);

    printf("Enter address for person 2:\n");
    scanf("%d", &adds[1].houseNo);
    scanf("%d", &adds[1].blockNo);
    scanf("%s", &adds[1].city);
    scanf("%s", &adds[1].state);

    printf("Enter address for person 3:\n");
    scanf("%d", &adds[2].houseNo);
    scanf("%d", &adds[2].blockNo);
    scanf("%s", &adds[2].city);
    scanf("%s", &adds[2].state);

    printf("Enter address for person 4:\n");
    scanf("%d", &adds[3].houseNo);
    scanf("%d", &adds[3].blockNo);
    scanf("%s", &adds[3].city);
    scanf("%s", &adds[3].state);

    printf("Enter address for person 5:\n");
    scanf("%d", &adds[4].houseNo);
    scanf("%d", &adds[4].blockNo);
    scanf("%s", &adds[4].city);
    scanf("%s", &adds[4].state);
    printadd(adds[0]);
    printadd(adds[1]);
    printadd(adds[2]);
    printadd(adds[3]);
    printadd(adds[4]);

    return 0;
}