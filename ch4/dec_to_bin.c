/* program to convert decimal number into binary */

#include <stdio.h>

int main() {
    printf("Enter the number: ");
    long int decnum, binnum, temp, i=1, rem;

    scanf("%ld", &decnum);
    temp = decnum;

    while ( temp != 0 ) {
        rem = temp % 2;
        temp = temp / 2;

        binnum = binnum + rem * i;
        i = i * 10;
    }

    printf("%ld = %ld\n", decnum, binnum);
}
