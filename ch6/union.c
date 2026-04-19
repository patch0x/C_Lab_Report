#include <stdio.h>

union Student {
    char name[20];
    int age;
    float marks;
    char remarks;
};

int main() {
    union Student student;
    printf("Enter the name: ");
    scanf("%s", &student.name);
    printf("name: %s\n ", student.name);

    printf("Enter the age: ");
    scanf("%d", &student.age);
    printf("age: %d\n ", student.age);

    printf("Enter the marks: ");
    scanf("%f", &student.marks);
    printf("marks: %.2f\n ", student.marks);

    printf("Enter remarks: ");
    scanf(" %c", &student.remarks);
    printf("remarks: %c\n ", student.remarks);

    printf("\n");
    
    return 0;
}
