#include <stdio.h>

struct Student {
    char name[50];
    int roll;
    float marks;
};

struct Student getTopper(struct Student s[], int n) {
    int i, index = 0;

    for (i = 1; i < n; i++) {
        if (s[i].marks > s[index].marks) {
            index = i;
        }
    }

    return s[index]; 
}

int main() {
    int n, i;

    printf("Enter number of students: ");
    scanf("%d", &n);

    struct Student s[n];

    printf("\nEnter details (Name Roll Marks):\n");
    for (i = 0; i < n; i++) {
        scanf("%s %d %f", s[i].name, &s[i].roll, &s[i].marks);
    }

    struct Student topper = getTopper(s, n);

    printf("\nTop Student: %s | Roll: %d | Marks: %.2f\n",
           topper.name, topper.roll, topper.marks);

    return 0;
}
