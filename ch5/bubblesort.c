#include <stdio.h>

int main() {
    int n, i, j, temp;
    printf("Enter the size: ");
    scanf("%d", &n);

    int array[n];
    for (i=0; i<n; i++) {
        printf("Enter %d element.", i+1);
        scanf("%d", &array[i]);
    }

    printf("The unsorted numbers are: \n");
    for (i=0; i<n; i++) {
        printf("%d\t", array[i]);
    }
    printf("\n");

    for (i=0; i<n-1; i++) {
        for (j=0; j<n-i-1; j++) {
            if (array[j] > array[j+1]) {
                temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
            }
        }
    }
    printf("The sorted numbers are: \n");
    for (i=0; i<n; i++) {
        printf("%d\t", array[i]);
    }
    printf("\n");
    return 0;
}
