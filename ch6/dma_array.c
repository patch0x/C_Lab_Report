#include <stdio.h>
#include <stdlib.h>

int minmax(int *num, int n) {
    int min, max, i;
    min = *(num);
    max = *(num);
 
    for (i=0; i<n; i++) {
        if (*(num+i) > max) {
            max = *(num+i);
        }
        else if (*(num+i) < min) {
            min = *(num+i);
        }
    }
    printf("minimum: %d\nmaximum: %d\n", min, max);
    return 0;
}
int main() {
    int n, i;
    printf("Enter the size of array: ");
    scanf("%d", &n);

    int *num;
    num = (int *) calloc(n, sizeof(int));
    printf("Enter the array elements: ");
    for (i=0; i<n; i++) {
        scanf("%d", num+i);
    }

    minmax(num, n);
    return 0;
}
