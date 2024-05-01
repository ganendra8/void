#include <stdio.h>
#include <math.h>

#define EPSILON 0.00001 // Desired precision

// Function for which we are finding the root
double func(double x) {
    return x*x*x - 4*x - 9;
}

// Regula Falsi method
double regula_falsi(double a, double b) {
    if (func(a) * func(b) >= 0) {
        printf("Invalid interval.\n");
        return NAN; // Not a Number (invalid result)
    }

    double c;
    while (1) {
        // Calculate the point that intersects x-axis
        c = (a * func(b) - b * func(a)) / (func(b) - func(a));
        
        // Check if the root has been found within desired precision
        if (fabs(func(c)) < EPSILON)
            break;
        
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

    double root = regula_falsi(a, b);
    
    if (!isnan(root))
        printf("Root is: %lf\n", root);
    
    return 0;
}

