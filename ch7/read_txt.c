#include <stdio.h>

int main() {
    FILE *fp;

    char s[100];

    fp = fopen("employee.txt", "r");

    printf("Text from the file is:\n");
    while ( (fgets(s, 100, fp)) != NULL ) {
        printf("%s", s);
    }

    fclose(fp);
}
