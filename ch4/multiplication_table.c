/* program to display multiplication table using loop. */

#include <stdio.h>

int main() {
    printf("Enter the number to get multiplication table: ");
    int num;
    scanf("%d", &num);

    for (int i=1; i<11; i++) {
        printf("%d x %d = %d\n", num, i, num*i);
    }

    return 0;
}
