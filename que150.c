#include <stdio.h>

struct Student {
    char name[50];
    int roll;
    float marks;
};

int main() {
    struct Student st;
    struct Student *p;

    p = &st;

    printf("Enter student details (Name Roll Marks):\n");
    scanf("%s %d %f", p->name, &p->roll, &p->marks);

    printf("\nModified Data: Name: %s | Roll: %d | Marks: %.2f\n",
           p->name, p->roll, p->marks);

    return 0;
}