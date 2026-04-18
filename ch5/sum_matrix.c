#include <stdio.h>
#define M 3
#define N 3

int main() {
    int sum[M][N], matA[M][N], matB[M][N], i, j;

    printf("Enter the elements of first matrix.\n");
    for (i=0; i<M; i++) {
        for (j=0; j<N; j++) {
            scanf("%d", &matA[i][j]);
        }
    }

    printf("first matrix is: \n");
    for (i=0; i<M; i++) {
        for (j=0; j<N; j++) {
            printf("%d\t", matA[i][j]);
        }
        printf("\n");
    }
    
    printf("Enter the elements of second matrix.\n");
    for (i=0; i<M; i++) {
        for (j=0; j<N; j++) {
            scanf("%d", &matB[i][j]);
        }
    }

    printf("second matrix is: \n");
    for (i=0; i<M; i++) {
        for (j=0; j<N; j++) {
            printf("%d\t", matB[i][j]);
        }
        printf("\n");
    }

    for (i=0; i<M; i++) {
        for (j=0; j<N; j++) {
            sum[i][j] = matA[i][j] + matB[i][j];
        }
    }

    printf("The sum of matrix is: \n");
    for (i=0; i<M; i++) {
        for (j=0; j<N; j++) {
            printf("%d\t", sum[i][j]);
        }
        printf("\n");
    }
    return 0;
}
