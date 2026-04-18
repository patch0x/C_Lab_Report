#include <stdio.h>

#define MAX 10

int main() {
    int number[MAX], key, i;

    for (i = 0; i < MAX; i++) {
        printf("\nEnter the %d element of array: ", i+1);
        scanf("%d", &number[i]);
    }

    printf("Enter the number to search: ");
    scanf("%d", &key);

    for (i = 0; i < MAX; i++) {
        if (key == number[i]){
            printf("The number is found at %d!", i+1);
            return 0;
        }
    }

    printf("\nCoundn't find the number!!\n");
}

