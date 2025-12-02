#include <stdio.h>
#include <stdlib.h>

struct Student {
    char name[50];
    int roll;
    float marks;
};

int main() {
    struct Student *s;

    s = (struct Student*) malloc(sizeof(struct Student));

    if (s == NULL) {
        printf("Memory not allocated!\n");
        return 1;
    }

    printf("Enter student details (Name Roll Marks):\n");
    scanf("%s %d %f", s->name, &s->roll, &s->marks);

    printf("\nName: %s | Roll: %d | Marks: %.2f\n",
           s->name, s->roll, s->marks);


    free(s);

    return 0;
}