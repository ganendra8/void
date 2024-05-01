#include <stdio.h>
#include <math.h>

#define EPSILON 0.00001 // Desired precision

// Function for which we are finding the root
double func(double x) {
    return x*x*x - 4*x - 9;
}

// Bisection method
double bisection(double a, double b) {
    if (func(a) * func(b) >= 0) {
        printf("Invalid interval.\n");
        return NAN; // Not a Number (invalid result)
    }

    double c;
    while ((b - a) >= EPSILON) {
        // Find middle point
        c = (a + b) / 2;

        // Check if middle point is root
        if (func(c) == 0.0)
            return c;

        // Decide the side to repeat the steps
        if (func(c) * func(a) < 0)
            b = c;
        else
            a = c;
    }
    return c;
}

int main() {
    double a, b;
    
    printf("Enter the interval [a, b] where the root lies: ");
    scanf("%lf %lf", &a, &b);

    double root = bisection(a, b);
    
    if (!isnan(root))
        printf("Root is: %lf\n", root);
    
    return 0;
}

