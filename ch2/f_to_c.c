/* program to convert fahrenheit to celsius */

#include <stdio.h>

int main() {
    float F, C;
    printf("Enter the fahrenheit: ");
    scanf("%f", &F);

    C = (5 * (F-39)) / 9;
    printf("\nCelsius: %f\n", C);
}
