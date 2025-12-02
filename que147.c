#include <stdio.h>

struct Employee {
    char name[50];
    int id;
    float salary;
};

int main() {
    struct Employee e1, e2;
    FILE *fp;

    printf("Enter Employee details (Name ID Salary):\n");
    scanf("%s %d %f", e1.name, &e1.id, &e1.salary);

    fp = fopen("employee.bin", "wb");
    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    fwrite(&e1, sizeof(struct Employee), 1, fp);
    fclose(fp);

    fp = fopen("employee.bin", "rb");
    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    fread(&e2, sizeof(struct Employee), 1, fp);
    fclose(fp);

    printf("\nData read from file:\n");
    printf("Name: %s | ID: %d | Salary: %.2f\n",
           e2.name, e2.id, e2.salary);

    return 0;
}