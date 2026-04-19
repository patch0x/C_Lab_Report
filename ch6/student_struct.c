#include <stdio.h>

struct student {
    char name[20];
    int roll;
    float marks;
    char remarks;
};

int main() {
    printf("Enter the number of students: ");
    int N, i;
    scanf("%d", &N);

    struct student students[N];

    for (i=0; i<N; i++) {
        printf("Enter the information of student %d: \n", i+1);
        printf("Enter the name: ");
        scanf("%s", students[i].name);
        printf("Enter the roll num: ");
        scanf("%d", &students[i].roll);    
        printf("Enter the marks: ");
        scanf("%f", &students[i].marks);
        printf("Enter the remarks: ");
        scanf(" %c", &students[i].remarks);
        printf("\n");
    }

    printf("Student Name\tRoll Number\tMarks\tRemarks\n");
    for (i=0; i<N; i++) {
        printf("%s\t\t%d\t\t%.2f\t\t%c\n", students[i].name, students[i].roll, students[i].marks, students[i].remarks);
    }
}
