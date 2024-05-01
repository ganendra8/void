#include <stdio.h>
#include <math.h>

#define EPSILON 0.00001 // Desired precision

// Function for which we are finding the root
double func(double x) {
    return x*x*x - 4*x - 9;
}

// Derivative of the function
double func_derivative(double x) {
    return 3*x*x - 4;
}

// Newton-Raphson method
double newton_raphson(double x0) {
    double x1 = x0;
    while (1) {
        double fx0 = func(x0);
        double fpx0 = func_derivative(x0);
        
        // Check if derivative is zero
        if (fpx0 == 0.0) {
            printf("Derivative is zero.\n");
            return NAN; // Not a Number (invalid result)
        }
        
        // Update x1
        x1 = x0 - (fx0 / fpx0);
        
        // Check for convergence
        if (fabs(x1 - x0) < EPSILON)
            break;
        
        // Update x0 for next iteration
        x0 = x1;
    }
    return x1;
}

int main() {
    double x0;
    
    printf("Enter initial guess: ");
    scanf("%lf", &x0);

    double root = newton_raphson(x0);
    
    if (!isnan(root))
        printf("Root is: %lf\n", root);
    
    return 0;
}

