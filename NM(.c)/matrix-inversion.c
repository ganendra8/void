#include <stdio.h>

void gaussJordan(int n, float a[10][10], float b[10][10]) {
    int i, j, k, i1, j1;
    float c[10][10];
    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
            c[i][j] = a[i][j];
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++)
            if (i != j) {
                float temp = c[j][i] / c[i][i];
                for (k = 0; k < n; k++)
                    c[j][k] -= temp * c[i][k];
            }
    }
    for (i = 0; i < n; i++) {
        float temp = c[i][i];
        for (j = 0; j < n; j++)
            c[i][j] /= temp;
    }
    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
            b[i][j] = c[i][j];
}

int main() {
    int n, i, j;
    printf("Enter the dimension of the matrix: ");
    scanf("%d", &n);
    float a[10][10], b[10][10], c[10][10];
    printf("Enter the elements of the matrix:\n");
    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
            scanf("%f", &a[i][j]);
    gaussJordan(n, a, b);
    printf("The inverse of the matrix is:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++)
            printf("%.2f\t", b[i][j]);
        printf("\n");
    }
    return 0;
}
