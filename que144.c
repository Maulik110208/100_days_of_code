#include <stdio.h>

struct Student {
    char name[50];
    int roll;
    float marks;
};

void printStudent(struct Student s) {
    printf("Name: %s | Roll: %d | Marks: %.2f\n", s.name, s.roll, s.marks);
}

int main() {
    struct Student st;

    printf("Enter student details (Name Roll Marks):\n");
    scanf("%s %d %f", st.name, &st.roll, &st.marks);

    printf("\n");
    printStudent(st);

    return 0;
}
