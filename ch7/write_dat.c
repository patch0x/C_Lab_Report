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

    char another = 'Y';

    fp = fopen("employee.dat", "wb");

    if (fp == NULL) {
        printf("Cannot open file.  \n");
        return 0;
    }

    while (another == 'Y') {  
        printf("Enter the name: ");
        scanf("%s", emp.name);

        printf("Enter the id: ");
        scanf("%d", &emp.id);

        printf("Enter the age: ");
        scanf("%d", &emp.age);

        printf("Enter the salary: ");
        scanf("%f", &emp.salary);
        printf("\n");


        fwrite(&emp, sizeof(emp), 1, fp);

        printf("Add another record 'Y': ");
        scanf(" %c", &another);
    }    

    fclose(fp);
    return 0;
}
