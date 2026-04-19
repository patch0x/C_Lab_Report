#include <stdio.h>

int add(int x, int y, int a, int b) {
    printf("\nAdding gives: %d+%di", a+x, b+y);
    return 0;
}

int sub(int x, int y, int a, int b) {
    printf("\nAdding gives: %d+%di", a-x, b-y);
    return 0;
}

int multiply(int x, int y, int a, int b) {
    printf("\nMultiplying gives: %d+%di", a*x, b*y);
    return 0;
}

int main() {
    int a, b, x, y;
    printf("Enter the 1's complex number (x, y): ");
    scanf("%d %d", &x, &y);

    printf("Enter the 2nd complex number (x, y): ");
    scanf("%d %d", &a, &b);

    add(x,y,a,b);
    sub(x,y,a,b);
    multiply(x,y,a,b);

    printf("\n");

    return 0;
}
