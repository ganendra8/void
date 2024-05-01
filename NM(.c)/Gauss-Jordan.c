#include <stdio.h>

#define N 3 // Number of equations/variables

// Function to perform Gauss-Jordan elimination
void gauss_jordan(double matrix[N][N+1]) {
    int i, j, k;
    double temp;

    for (i = 0; i < N; i++) {
        // Partial pivot
        if (matrix[i][i] == 0.0) {
            printf("Partial pivot is needed.\n");
            return;
        }

        // Division step
        temp = matrix[i][i];
        for (j = 0; j <= N; j++)
            matrix[i][j] /= temp;

        // Elimination step
        for (j = 0; j < N; j++) {
            if (i != j) {
                temp = matrix[j][i];
                for (k = 0; k <= N; k++)
                    matrix[j][k] -= temp * matrix[i][k];
            }
        }
    }
}

int main() {
    double matrix[N][N+1];
int i,j;
    // Input coefficients and constants
    printf("Enter the coefficients of equations and constants:\n");
    for ( i = 0; i < N; i++) {
        printf("Equation %d: ", i + 1);
        for ( j = 0; j < N + 1; j++) {
            scanf("%lf", &matrix[i][j]);
        }
    }

    // Perform Gauss-Jordan elimination
    gauss_jordan(matrix);

    // Output solution
    printf("\nThe solution is:\n");
    for (i = 0; i < N; i++) {
        printf("x%d = %.2lf\n", i + 1, matrix[i][N]);
    }

    return 0;
}

