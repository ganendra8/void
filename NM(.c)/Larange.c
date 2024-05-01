#include <stdio.h>
#include <stdlib.h> // Include stdlib.h for malloc() and free()
#include <math.h>

double Lagrange(double x, double *x_data, double *y_data, int n) {
  double result = 0.0;
  int i, j;

  for (i = 0; i <= n; i++) {
    double term = 1.0;
    for (j = 0; j <= n; j++) {
      if (i != j) {
        term *= (x - x_data[j]) / (x_data[i] - x_data[j]);
      }
    }
    term *= y_data[i];
    result += term;
  }

  return result;
}

int main() {
  int n, i;
  double x, *x_data, *y_data;

  // Get the number of data points
  printf("Enter the number of data points: ");
  scanf("%d", &n);

  // Allocate memory for data points
  x_data = (double*)malloc((n + 1) * sizeof(double));
  y_data = (double*)malloc((n + 1) * sizeof(double));

  if (x_data == NULL || y_data == NULL) {
    printf("Memory allocation failed!\n");
    return 1;
  }

  // Get the data points
  printf("Enter the data points (x y format):\n");
  for (i = 0; i <= n; i++) {
    scanf("%lf %lf", &x_data[i], &y_data[i]);
  }

  // Get the value of x for which to interpolate
  printf("Enter the value of x for interpolation: ");
  scanf("%lf", &x);

  // Calculate the interpolated y value using Lagrange function
  double y_interpolated = Lagrange(x, x_data, y_data, n);

  // Print the result
  printf("The interpolated value of y at x = %.2lf is: %.4lf\n", x, y_interpolated);

  // Free allocated memory
  free(x_data);
  free(y_data);

  return 0;
}

