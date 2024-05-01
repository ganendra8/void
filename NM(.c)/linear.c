#include <stdio.h>

void linearForm(float x1, float y1, float x2, float y2, float *a, float *b) {
    // Calculate slope (b)
    *b = (y2 - y1) / (x2 - x1);
    
    // Calculate intercept (a)
    *a = y1 - (*b * x1);
}

int main() {
    float x1, y1, x2, y2, a, b;

    // Get two points (x1, y1) and (x2, y2)
    printf("Enter the first point (x1 y1): ");
    scanf("%f %f", &x1, &y1);
    printf("Enter the second point (x2 y2): ");
    scanf("%f %f", &x2, &y2);

    // Calculate linear form
    linearForm(x1, y1, x2, y2, &a, &b);

    // Print the linear form
    printf("The linear form is: y = %.2f + %.2fx\n", a, b);

    return 0;
}

