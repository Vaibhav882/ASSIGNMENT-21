#include <stdio.h>

struct Marks {
    int roll;
    char name[50];
    float chem, maths, phy;
};

int main() {
    struct Marks s[5];
    for(int i=0; i<5; i++) {
        printf("Enter roll no, name, Chemistry, Maths, Physics marks for student %d: ", i+1);
        scanf("%d %s %f %f %f", &s[i].roll, s[i].name, &s[i].chem, &s[i].maths, &s[i].phy);
    }

    printf("\n--- Student Percentage ---\n");
    for(int i=0; i<5; i++) {
        float percent = (s[i].chem + s[i].maths + s[i].phy) / 3.0;
        printf("Roll: %d, Name: %s, Percentage: %.2f%%\n", s[i].roll, s[i].name, percent);
    }
    return 0;
}
