#include <stdio.h>

#define MAX_SIZE 10 // Maximum size of the matrix (adjustable)
int i,j,k;
void swap_rows(double matrix[][MAX_SIZE], int n, int row1, int row2) {
  for ( i = 0; i <= n; i++) {
    double temp = matrix[row1][i];
    matrix[row1][i] = matrix[row2][i];
    matrix[row2][i] = temp;
  }
}

int find_pivot(double matrix[][MAX_SIZE], int n, int col) {
  // Find the first non-zero row from the current column onwards
  for ( i = col; i <= n; i++) {
    if (matrix[i][col] != 0.0) {
      return i;
    }
  }
  return -1; // No pivot found
}

int forward_elimination(double matrix[][MAX_SIZE], int n) {
  for ( i = 0; i < n; i++) {
    // Check if diagonal element is zero (may need pivoting)
    if (matrix[i][i] == 0.0) {
      int pivot_row = find_pivot(matrix, n, i);
      if (pivot_row == -1) {
        printf("Singular matrix encountered!\n");
        return -1; // Singular matrix (no solution)
      }
      swap_rows(matrix, n, i, pivot_row);
    }

    // Eliminate leading coefficients in remaining rows
    for (j = i + 1; j <= n; j++) {
      double factor = matrix[j][i] / matrix[i][i];
      for ( k = i; k <= n; k++) {
        matrix[j][k] -= factor * matrix[i][k];
      }
    }
  }
  return 0; // Successful forward elimination
}

void back_substitution(double matrix[][MAX_SIZE], int n, double solution[]) {
  // Solve for unknowns in backward order
  for (i = n - 1; i >= 0; i--) {
    solution[i] = matrix[i][n] / matrix[i][i];
    for ( j = i + 1; j <= n; j++) {
      solution[i] -= solution[j] * matrix[i][j];
    }
  }
}

int main() {
  int n, i, j;
  double matrix[MAX_SIZE][MAX_SIZE], solution[MAX_SIZE];

  printf("Enter the number of equations (matrix size): ");
  scanf("%d", &n);

  // Check for valid matrix size
  if (n > MAX_SIZE) {
    printf("Error: Matrix size exceeds maximum (%d).\n", MAX_SIZE);
    return 1;
  }

  printf("Enter the augmented matrix coefficients:\n");
  for (i = 0; i < n; i++) {
    for (j = 0; j <= n; j++) {
      scanf("%lf", &matrix[i][j]);
    }
  }

  // Perform forward elimination
  if (forward_elimination(matrix, n) == -1) {
    return 1; // Singular matrix, no solution
  }

  // Back substitution to find solutions
  back_substitution(matrix, n, solution);

  // Print the solution
  printf("Solution vector:\n");
  for (i = 0; i < n; i++) {
    printf("x[%d] = %.4lf\n", i + 1, solution[i]);
  }

  return 0;
}

