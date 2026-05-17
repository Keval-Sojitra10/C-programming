#include<stdio.h>
#include<string.h>
struct student{
    char name[50];
    int roll;
    float cgpa;
};
void printinfo(struct student s1){
    printf("Student information:\n");
    printf("Name = %s\n", s1.name);
    printf("Roll = %d\n", s1.roll);
    printf("CGPA = %f\n", s1.cgpa);
}
    
int main(){
    struct student s1;
    //s1.name="Pratham";
    strcpy(s1.name,"Pratham");
    s1.roll= 167;
    s1.cgpa= 8.5;

    printinfo(s1);

    struct student s3={"Kavy",188,9};
    struct student *ptr= &s3;
    printf("with pointer, %d\n", (*ptr).roll);
    printf("with arrow, %d\n", ptr->roll);
    printf("with arrow, %f\n", ptr->cgpa);
    printf("with arrow, %s\n", ptr->name);

    // printf("Student is %s\n", s3.name);
    // printf("%d\n", s3.roll);
    // printf("%f\n", s3.cgpa);

    struct student s2={"Aryan", 206, 8};
    
    printf("Student is %s\n", s2.name);
    printf("%d\n", s2.roll);
    printf("%f\n", s2.cgpa);

    return 0;
}
