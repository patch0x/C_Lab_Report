#include <stdio.h>
#include <string.h>

#define N 5

int main() {
    char name[N][20], temp[20];
    int i,j;
    printf("Enter the names.\n");
    for (i=0; i<N; i++)
        scanf("%s", name[i]);
    for (i=0; i<N-1; i++) {
        for (j=0; j<N-i-1; j++) {
            if (strcmp(name[j], name[j+1]) > 0)
            {
                strcpy(temp, name[j]);
                strcpy(name[j], name[j+1]);
                strcpy(name[j+1], temp);
            }
        }
    }

    printf("Sorted list is:\n");
    for (i=0; i<N; i++)
        printf("%s\n", name[i]);
}
