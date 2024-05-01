#include <stdio.h>
#include <math.h>

// Define the function to be integrated (replace this with your actual function)
double f(double x) {
  return x * x; // Example function: x^2
}

int main() {
  int n, i;
  double a, b, h, x, integral;

  // Get input from the user (ensure number of sub-intervals is a multiple of 3)
  printf("Enter the number of sub-intervals (must be a multiple of 3): ");
  scanf("%d", &n);
  if (n % 3 != 0) {
    printf("Error: Number of sub-intervals must be a multiple of 3.\n");
    return 1;
  }

  printf("Enter the lower limit of integration (a): ");
  scanf("%lf", &a);
  printf("Enter the upper limit of integration (b): ");
  scanf("%lf", &b);

  // Calculate the width of each sub-interval
  h = fabs(b - a) / n;

  // Initialize the sum for Simpson's 3/8 Rule
  integral = f(a) + f(b);

  // Apply Simpson's 3/8 Rule formula with separate terms
  for (i = 1; i < n - 1; i++) {
    x = a + i * h;
    if (i % 3 == 1) { // First terms (multiplied by 1)
      integral += f(x);
    } else if (i % 3 == 2) { // Second terms (multiplied by 3)
      integral += 3 * f(x);
    } else { // Third terms (multiplied by 2)
      integral += 2 * f(x);
    }
  }

  // Final calculation using Simpson's 3/8 Rule formula
  integral *= (3 * h) / 8;

  // Print the result
  printf("The approximate value of the integral using Simpson's 3/8 Rule is: %lf\n", integral);

  return 0;
}

