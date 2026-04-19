#include <stdio.h>

int main() {
    int a[] = {1, 2, 3, 4, 5};
    int i, *ptr;
    ptr=&a[0];

    for (i=0; i<5; i++) {
        printf("a[%d] = %d:\t%p\n", i, a[i], ptr+i);
    }
    return 0;
}
