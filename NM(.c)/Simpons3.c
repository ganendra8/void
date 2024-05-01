#include <stdio.h>
#include <math.h>

// Define the function to be integrated (replace this with your actual function)
double f(double x) {
  return x * x; // Example function: x^2
}

int main() {
  int n, i;
  double a, b, h, x, sum, integral;

  // Get input from the user
  printf("Enter the number of sub-intervals: ");
  scanf("%d", &n);
  printf("Enter the lower limit of integration (a): ");
  scanf("%lf", &a);
  printf("Enter the upper limit of integration (b): ");
  scanf("%lf", &b);

  // Calculate the width of each sub-interval
  h = fabs(b - a) / n;

  // Initialize the sum for the trapezoidal rule
  sum = 0.0;

  // Apply the Trapezoidal Rule (omitting the first and last terms for better accuracy)
  for (i = 1; i < n - 1; i++) {
    x = a + i * h;
    sum += f(x);
  }

  // Calculate the definite integral using the Trapezoidal Rule formula
  integral = (h / 2) * (f(a) + f(b) + 2 * sum);

  // Print the result
  printf("The approximate value of the integral using the Trapezoidal Rule is: %lf\n", integral);

  return 0;
}

