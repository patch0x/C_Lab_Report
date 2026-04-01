/* program to calculate area of triangle of base and height are given */

#include <stdio.h>

int main() {
    printf("Enter the base and height of triangle: ");
    float base, height;
    scanf("%f %f", &base, &height);

    float area = base * height * 0.5;

    printf("\nThe area is %f.\n", area);
}
