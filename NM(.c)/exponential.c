#include <stdio.h>
#include <math.h>

void exponentialForm(float x1, float y1, float x2, float y2, float *a, float *b) {
    // Calculate b
    *b = (log(y2) - log(y1)) / (x2 - x1);

    // Calculate a
    *a = y1 / exp((*b) * x1);
}

int main() {
    float x1, y1, x2, y2, a, b;

    // Get two points (x1, y1) and (x2, y2)
    printf("Enter the first point (x1 y1): ");
    scanf("%f %f", &x1, &y1);
    printf("Enter the second point (x2 y2): ");
    scanf("%f %f", &x2, &y2);

    // Calculate exponential form
    exponentialForm(x1, y1, x2, y2, &a, &b);

    // Print the exponential form
    printf("The exponential form is: y = %.2f * e^(%.2fx)\n", a, b);

    return 0;
}

