/* program to check whether given number is Armstrong or not. */

#include <stdio.h>

int main() {
    printf("Enter the number to check whether it is armstrong or not.\n:> ");
    int num;
    scanf("%d", &num);

    int sum = 0;
    int digit, temp;
    temp = num;

    while (temp != 0) {
        digit = temp % 10;
        temp = temp / 10;
        sum += digit * digit * digit;
    }

    if (sum == num)
        printf("The number is an armstrong.\n");
    else
        printf("The number is not an armstrong.\n");

    return 0;
}
