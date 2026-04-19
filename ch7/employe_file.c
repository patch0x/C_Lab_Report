#include <stdio.h>

int main() {
    FILE *fp;
    char name[20];
    int id;
    float salary;
    
    fp = fopen("employee.txt", "w");

    if (fp == NULL) {
        printf("Cannot create the file.\n");
        return 0;
    }

    printf("Enter the employee name: ");
    scanf("%s", name);

    printf("Enter the employee id: ");
    scanf("%d", &id);

    printf("Enter the employee salary: ");
    scanf("%f", &salary);

    printf("Writing the file: ");
    fprintf(fp, "Name=%s\nID=%d\nSalary=%.2f\n", name, id, salary);

    printf("\nDone!\n");
    fclose(fp);

    return 0;
}
