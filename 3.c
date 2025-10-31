#include <stdio.h>

struct Employee {
    int id;
    char name[50];
    float salary;
};

void displayEmployee(struct Employee e) {
    printf("\nID: %d\nName: %s\nSalary: %.2f\n", e.id, e.name, e.salary);
}
