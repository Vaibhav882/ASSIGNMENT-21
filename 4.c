#include <stdio.h>

struct Employee {
    int id;
    char name[50];
    float salary;
};

struct Employee highestSalary(struct Employee e[], int n) {
    struct Employee max = e[0];
    for(int i=1; i<n; i++) {
        if(e[i].salary > max.salary)
            max = e[i];
    }
    return max;
}
