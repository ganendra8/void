#include <stdio.h>
#include <math.h>

void powerMethod(float a[10][10], float x[10], float *maxEigenvalue, float *eigenvector) {
    int i, j, k;
    float b[10], norm, temp;
    for (i = 0; i < 10; i++) {
        b[i] = 0;
        for (j = 0; j < 10; j++)
            b[i] += a[i][j] * x[j];
    }
    norm = 0;
    for (i = 0; i < 10; i++)
        norm += b[i] * b[i];
    norm = sqrt(norm);
    *maxEigenvalue = 0;
    for (i = 0; i < 10; i++) {
        temp = fabs(b[i] / norm);
        if (temp > *maxEigenvalue) {
            *maxEigenvalue = temp;
            for (j = 0; j < 10; j++)
                eigenvector[j] = x[j];
            eigenvector[i] = b[i] / norm;
        }
    }
    for (i = 0; i < 10; i++)
        x[i] = b[i];
}

int main() {
    int i, j;
    float a[10][10], x[10], maxEigenvalue, eigenvector[10];
    printf("Enter the elements of the matrix:\n");
    for (i = 0; i < 10; i++)
        for (j = 0; j < 10; j++)
            scanf("%f", &a[i][j]);
    printf("Enter the initial vector x:\n");
    for (i = 0; i < 10; i++)
        scanf("%f", &x[i]);
    powerMethod(a, x, &maxEigenvalue, eigenvector);
    printf("The largest eigenvalue is: %.4f\n", maxEigenvalue);
    printf("The corresponding eigenvector is:\n");
    for (i = 0; i < 10; i++)
        printf("%.4f ", eigenvector[i]);
    return 0;
}
