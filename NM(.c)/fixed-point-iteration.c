#include <stdio.h>
#include <math.h>

#define EPSILON 0.00001 // Desired precision

// Function for which we are finding the root
double func(double x) {
    return x*x*x - 4*x - 9;
}

// Function for fixed-point iteration
double fixed_point_iteration(double x0) {
    double x1;
    int iter = 0;
    
    do {
        x1 = func(x0); // Update x1 using fixed-point iteration formula
        iter++;
        
        // Check for convergence or maximum iterations
        if (fabs(x1 - x0) < EPSILON || iter >= 1000)
            break;
        
        x0 = x1; // Update x0 for next iteration
    } while (1);
    
    return x1;
}

int main() {
    double x0;
    
    printf("Enter initial guess: ");
    scanf("%lf", &x0);

    double root = fixed_point_iteration(x0);
    
    printf("Root is: %lf\n", root);
    
    return 0;
}

