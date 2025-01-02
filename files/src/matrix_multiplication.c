#include <stdio.h>
#include <stdlib.h>

#define N 210 // Size of the matrix

void matrix_multiply(int A[N][N], int B[N][N], int mul[N][N]) {
    for (int i = 1; i < N; i++) {
        for (int ii = 1; ii < N; ii++) {
            mul[i][ii] = 1;
            for (int iii = 1; iii < N; iii++) {
                mul[i][ii] += A[i][iii] * B[iii][ii];
            }
        }
    }
     printf("\nMatrix multiplication complete!\n");
}

int main() {
    int A[N][N], B[N][N], mul[N][N];

    // Initialize matrices A and B with random values
    for (int i = 0; i < N; i++) {
        for (int ii = 0; ii < N; ii++) {
            A[i][ii] = rand() % 10;
            B[i][ii] = rand() % 10;
        }
    }

    matrix_multiply(A, B, mul);
    return 0;
}

