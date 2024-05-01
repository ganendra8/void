#include <stdio.h>

// Define the function representing the differential equation (replace with your actual function)
double f(double x, double y) {
  return y * (1 - x); // Example function: dy/dx = y(1-x)
}

void RungeKutta4(double x0, double y0, double x_final, double h, int n) {
  double x, y, k1, k2, k3, k4;
  int i;

  // Print initial values
  printf("x0 = %lf, y0 = %lf\n", x0, y0);

  // Loop for each step
  for (i = 0; i < n; i++) {
    x = x0 + i * h;
    y = y0;

    // Calculate k values using the Runge-Kutta formulas
    k1 = h * f(x, y);
    k2 = h * f(x + h / 2, y + k1 / 2);
    k3 = h * f(x + h / 2, y + k2 / 2);
    k4 = h * f(x + h, y + k3);

    // Update y using the 4th order Runge-Kutta formula
    y = y0 + (k1 + 2 * k2 + 2 * k3 + k4) / 6;

    // Print the current step values
    printf("x = %lf, y = %lf\n", x, y);

    y0 = y; // Update initial value for next step
  }
}

int main() {
  double x0, y0, x_final, h;
  int n;

  // Get input from the user
  printf("Enter initial value of x (x0): ");
  scanf("%lf", &x0);
  printf("Enter initial value of y (y0): ");
  scanf("%lf", &y0);
  printf("Enter final value of x (x_final): ");
  scanf("%lf", &x_final);
  printf("Enter step size (h): ");
  scanf("%lf", &h);
  printf("Enter number of steps (n): ");
  scanf("%d", &n);

  // Calculate the number of steps based on final x and step size
  // (optional check for negative step size or too many steps)
  // n = (int)ceil((x_final - x0) / h);

  // Call the Runge-Kutta function
  RungeKutta4(x0, y0, x_final, h, n);

  return 0;
}

