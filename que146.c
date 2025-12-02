#include <stdio.h>

struct Date {
    int day;
    int month;
    int year;
};

struct Employee {
    char name[50];
    int id;
    struct Date join;
};

int main() {
    struct Employee e;

    printf("Enter Employee details (Name ID Day Month Year):\n");
    scanf("%s %d %d %d %d",
          e.name,
          &e.id,
          &e.join.day,
          &e.join.month,
          &e.join.year);

    printf("\nName: %s | ID: %d | Joining Date: %02d/%02d/%04d\n",
           e.name,
           e.id,
           e.join.day,
           e.join.month,
           e.join.year);

    return 0;
}