#include <stdio.h>

#define M 3
#define N 3

void print_mat(int temp[M][N]) {
    int i,j;
    for (i = 0; i< M; i++) {
        for (j=0; j<N; j++) {
            printf("\t%d", temp[i][j]);
        }
        printf("\n");
    }
}

int transpose(int mat[M][N]) {
    int temp[M][N];
    int i,j;
    for (i=0; i<M; i++) {
        for (j=0;j<N; j++) {
            temp[j][i] = mat[i][j];
        }
    }

    printf("The transpose is:\n");
    print_mat(temp);
    return 0;

}



int main() {
    int matA[M][N], i, j;

    printf("Enter the matrix elements: ");
    for (i = 0; i< M; i++) {
        for (j=0; j<N; j++) {
            scanf("%d", &matA[i][j]);
        }
    }

    printf("The matrix is: \n");
    print_mat(matA);

    transpose(matA);
}
