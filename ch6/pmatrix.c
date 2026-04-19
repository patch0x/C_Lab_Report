#include <stdio.h>

#define M 3
#define N 3

int matInput(int (*a)[N]) {
    int i, j;
    for (i=0; i<M; i++) {
        for (j=0; j<N; j++) {
            scanf("%d", *(a+i) + j);
        }
    }
}

int printMat(int (*a)[N]) {
    int i,j;
    for (i=0; i<M; i++) {
        for (j=0; j<N; j++) {
            printf("%d\t", *(*(a+i) + j));
        }
        printf("\n");
    }
}

void addMat(int (*a)[N], int (*b)[N], int (*sum)[N]) {
    int i,j;
    for (i=0; i<M; i++) {
        for (j=0; j<N; j++) {
            *(*(sum+i)+j) = (*(*(a+i)+j)) + (*(*(b+i)+j));
        }
    }
}

int main() {
    int a[M][N], b[M][N], sum[M][N], i,j;

    printf("Enter the elements of first matrix.\n");
    matInput(a);
    printf("Enter the elements of second matrix.\n");
    matInput(b);

    printf("The first matrix is:\n");
    printMat(a);
    printf("The second matrix is:\n");
    printMat(b);

    addMat(a, b, sum);
    printf("The sum matrix is:\n");
    printMat(sum);

   

}
