/* program to read a 5 digit number and find sum of individual digits. */

#include <stdio.h>

int main() {
    printf("Enter five digit number to sum the individual digits.\n: ");
    int num;
    scanf("%d", &num);

    int sum=0;

    for (int i=0; i<5; i++) {
        sum += num % 10;
        num = num / 10;
    }

    printf("The sum is %d.\n", sum);
}
