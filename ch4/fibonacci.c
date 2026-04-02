/* program to print fibonacci sequence upto n terms */

#include <stdio.h>

int main() {
    printf("Enter the number of terms: ");
    int n;
    scanf("%d", &n);

    int fib1, fib2, current, prev, temp;

    fib1 = 1;
    fib2 = 1;
    current = fib2;
    prev = fib1;

    printf("%d\n", prev);

    int i = 0;
    temp = current;

    do {
        current = prev + current;
        prev = temp;
        temp = current;
        printf("%d\n", prev);
        i++;
    } while ( i < n );

    return 0;

}
