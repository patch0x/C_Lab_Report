#include <stdio.h>

int main() {
    printf("Enter the number: ");
    int num;
    scanf("%d", &num);

    int j=0;
    for (int i=2; i<=num; i++) {
        j = 2;
        while (j != i) {
            if ( (i % j == 0) )
                break;
            j++;
        }
        if (j == i) 
            printf("%d\n", i);
    }
}
