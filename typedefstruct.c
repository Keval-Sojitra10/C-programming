#include<stdio.h>
#include<string.h>
typedef struct student{
    char name[50];
    int roll;
    float cgpa;
} STUDENT;
void printinfo(struct student s1){
    printf("Student information:\n");
    printf("Name = %s\n", s1.name);
    printf("Roll = %d\n", s1.roll);
    printf("CGPA = %f\n", s1.cgpa);
}
    
int main(){
    STUDENT s1={"Pratham",167,8.5};
    printinfo(s1);

    STUDENT s3={"Kavy",188,9};
    //STUDENT *ptr= &s3;
    printinfo(s3);

    STUDENT s2={"Aryan", 206, 8};
    printinfo(s2);

    return 0;
}
