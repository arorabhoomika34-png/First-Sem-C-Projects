//Q80: Multiply two matrices.//
#include <stdio.h>

int main() {
    int m1, n1, m2, n2;
    printf("Enter rows and cols of first matrix: ");
    scanf("%d %d", &m1, &n1);

    int A[m1][n1];
    printf("Enter elements of first matrix:\n");
    for (int i = 0; i < m1; i++) {
        for (int j = 0; j < n1; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    printf("Enter rows and cols of second matrix: ");
    scanf("%d %d", &m2, &n2);

    int B[m2][n2];
    printf("Enter elements of second matrix:\n");
    for (int i = 0; i < m2; i++) {
        for (int j = 0; j < n2; j++) {
            scanf("%d", &B[i][j]);
        }
    }
    if (n1 != m2) {
        printf("Matrix multiplication not possible!\n");
        return 0;
    }

    int C[m1][n2];
    for (int i = 0; i < m1; i++) {
        for (int j = 0; j < n2; j++) {
            C[i][j] = 0;
        }
    }
    for (int i = 0; i < m1; i++) {
        for (int j = 0; j < n2; j++) {
            for (int k = 0; k < n1; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }
    printf("Resultant Matrix:\n");
    for (int i = 0; i < m1; i++) {
        for (int j = 0; j < n2; j++) {
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }

    return 0;
}
