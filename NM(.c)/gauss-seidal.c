#include <stdio.h>
#include <math.h>

void gaussSeidel(float a[10][10], float b[10], float x[10], int n) {
    int i, j, iter, flag;
    float epsilon, sum;
    printf("Enter the maximum number of iterations: ");
    scanf("%d", &iter);
    printf("Enter the tolerance value: ");
    scanf("%f", &epsilon);
    for (iter = 0; iter < 1000; iter++) {
        flag = 1;
        for (i = 0; i < n; i++) {
            sum = 0;
            for (j = 0; j < i; j++)
                sum += a[i][j] * x[j];
            for (j = i + 1; j < n; j++)
                sum += a[i][j] * x[j];
            x[i] = (b[i] - sum) / a[i][i];
            if (fabs(x[i] - x[i - 1]) > epsilon)
                flag = 0;
        }
        if (flag)
            break;
    }
    printf("The solution is:\n");
    for (i = 0; i < n; i++)
        printf("x[%d] = %.4f\n", i, x[i]);
}

int main() {
    int i, j;
    float a[10][10], b[10], x[10];
    int n;
    printf("Enter the number of variables: ");
    scanf("%d", &n);
    printf("Enter the coefficients of the matrix:\n");
    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
            scanf("%f", &a[i][j]);
    printf("Enter the constants:\n");
    for (i = 0; i < n; i++)
        scanf("%f", &b[i]);
    gaussSeidel(a, b, x, n);
    return 0;
}
