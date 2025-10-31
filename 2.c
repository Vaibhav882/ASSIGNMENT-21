#include <stdio.h>

struct Employee {
    int id;
    char name[50];
    float salary;
};

void inputEmployee(struct Employee *e) {
    printf("Enter ID: ");
    scanf("%d", &e->id);
    printf("Enter Name: ");
    scanf("%s", e->name);
    printf("Enter Salary: ");
    scanf("%f", &e->salary);
}
