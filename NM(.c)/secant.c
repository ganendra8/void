#include <stdio.h>
#include <math.h>

#define EPSILON 0.00001 // Desired precision

// Function for which we are finding the root
double func(double x) {
    return x*x*x - 4*x - 9;
}

// Secant method
double secant(double x0, double x1) {
    double x2;
    while (1) {
        double fx0 = func(x0);
        double fx1 = func(x1);
        
        // Check if difference is negligible
        if (fabs(fx1 - fx0) < EPSILON)
            break;
        
        // Update x2 using secant formula
        x2 = x1 - (fx1 * (x1 - x0)) / (fx1 - fx0);
        
        // Update x0 and x1 for next iteration
        x0 = x1;
        x1 = x2;
    }
    return x1;
}

int main() {
    double x0, x1;
    
    printf("Enter initial guesses x0 and x1: ");
    scanf("%lf %lf", &x0, &x1);

    double root = secant(x0, x1);
    
    printf("Root is: %lf\n", root);
    
    return 0;
}

