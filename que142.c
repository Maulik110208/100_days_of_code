#include<stdio.h>

struct Student {
    char name[50];
    int roll;
    float marks;
};

int main() {
    struct Student s[5];
    int i;


    printf("Enter the details of 5 students (Name, Roll, Marks):\n");

    for (i=0; i<5; i++) {
        printf("\nStudent %d:\n", i+1);
        printf("%s %d %f", s[i].name, &s[i].roll, &s[i].marks);
        
    }
    printf("\n---------------------------------------------\n");
    printf("Name\t\tRoll\tMarks\n");
    printf("---------------------------------------------\n");

    for (i = 0; i < 5; i++) {
        printf("%s\t\t%d\t%.2f\n", s[i].name, s[i].roll, s[i].marks);
    }

    return 0;
}