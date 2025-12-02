#include <stdio.h>

struct Student {
    char name[50];
    int roll;
    float marks;
};

int main() {
    int n, i, index = 0;

    printf("Enter number of students: ");
    scanf("%d", &n);

    struct Student s[n];

    printf("\nEnter details (Name Roll Marks):\n");
    for (i = 0; i < n; i++) {
        scanf("%s %d %f", s[i].name, &s[i].roll, &s[i].marks);
    }

    for (i = 1; i < n; i++) {
        if (s[i].marks > s[index].marks) {
            index = i;
        }
    }

    printf("\nTopper: %s (Marks: %.2f)\n", s[index].name, s[index].marks);

    return 0;
}
