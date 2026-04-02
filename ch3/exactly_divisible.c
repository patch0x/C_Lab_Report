/* program to input a number and find whether it is exactly divisible by both 5 and 7 or not */

#include <stdio.h>

int main() {
    printf("Enter the number: ");
    int num;
    scanf("%d", &num);

    if ( (num % 5) == 0 ) {
        if ( (num % 7) == 0 )
            printf("The number is divisible by both 5 and 7.\n");
        else
            printf("The number is only divisible by 5.\n");
    }
    else if ((num % 7) == 0)
        printf("The number is only divisible by 7.\n");
    
    return 0;
}
