/* program to find compund interest */

#include <stdio.h>
#include <math.h>

int main() {
    float P, T, R, CI;

    printf("Enter the principal: ");
    scanf("%f", &P);
    printf("Enter the time: ");
    scanf("%f", &T);
    printf("Enter the rate: ");
    scanf("%f", &R);

    CI = P * pow(( 1+(R/100) ), T) - P;

    printf("The compound interest is %f.\n", CI);
}
