/* program to read a four digit number and display its reverse order. */

#include <stdio.h>

int main() {
    printf("Enter the four digit number to reverse: ");
    int num, digit;
    int reverse = 0;
    scanf("%d", &num);

    for (int i=0; i<4; i++) {
        digit = num % 10;
        num = num / 10;
        reverse = reverse * 10 + digit;
    }

    printf("The reverse digit is %d.\n", reverse);
}
