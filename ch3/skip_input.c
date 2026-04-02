/* program to skip inputs */

#include <stdio.h>

int main() {
    int fourth_value;

    printf("Enter four digits: ");
    int items_read = scanf("%*d %*d %*d %d", &fourth_value);

    printf("Successfully skipped 3 integers.\n");
    printf("The 4th integer is: %d\n", fourth_value);

    return 0;
}
