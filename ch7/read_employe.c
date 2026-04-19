#include <stdio.h>

struct employee {
    char name[20];
    int id;
    int age;
    float salary;
};

int main() {
    FILE *fp;

    struct employee emp;
    fp = fopen("employee.dat", "rb");
    if (fp == NULL) {
        printf("Cannot oopen file !!\n");
        return 0;
    }

    printf("The records in the file employee are: ");
    while (fread(&emp, sizeof(emp), 1, fp) == 1) {
        printf("\nname:%s\nID:%d\nage:%d\nsalary:%.2f", emp.name, emp.id, emp.age, emp.salary);
        printf("\n");
    }

    fclose(fp);

    return 0;
}
