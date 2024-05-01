#include <stdio.h>
#include <math.h>

void wolfeDecomposition(float A[10][10], float b[10], float c[10], float D[10][10], float d[10], float x[10], float pi[10], float tol) {
    int i, j, k, n, m;
    float ck, ak[10], cBBinv[10], barcs;
    n = 10;
    m = 10;
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            if (i == j)
                pi[i] = c[i];
            else
                pi[i] = 0;
        }
        ck = 0;
        for (j = 0; j < m; j++)
            ck += A[i][j] * pi[j];
        ak[i] = b[i] - ck;
        cBBinv[i] = 0;
        for (j = 0; j < m; j++)
            cBBinv[i] += D[i][j] * pi[j];
        barcs = 0;
        for (j = 0; j < m; j++)
            barcs += ak[j] * cBBinv[j];
        if (barcs < tol) {
            for (j = 0; j < m; j++)
                x[j] += ak[j] * cBBinv[j];
        }
    }
}

int main() {
    int i, j;
    float A[10][10], b[10], c[10], D[10][10], d[10], x[10], pi[10];
    float tol = 0.001;
    printf("Enter the coefficients of the matrix A:\n");
    for (i = 0; i < 10; i++)
        for (j = 0; j < 10; j++)
            scanf("%f", &A[i][j]);
    printf("Enter the constants b:\n");
    for (i = 0; i < 10; i++)
        scanf("%f", &b[i]);
    printf("Enter the coefficients of the matrix D:\n");
    for (i = 0; i < 10; i++)
        for (j = 0; j < 10; j++)
            scanf("%f", &D[i][j]);
    printf("Enter the constants d:\n");
    for (i = 0; i < 10; i++)
        scanf("%f", &d[i]);
    printf("Enter the coefficients c:\n");
    for (i = 0; i < 10; i++)
        scanf("%f", &c[i]);
    wolfeDecomposition(A, b, c, D, d, x, pi, tol);
    printf("The solution is:\n");
    for (i = 0; i < 10; i++)
        printf("x[%d] = %.4f\n", i, x[i]);
    return 0;
}
