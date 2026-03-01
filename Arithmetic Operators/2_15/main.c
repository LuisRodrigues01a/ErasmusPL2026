#include <stdio.h>

int main() {
    double x;
    printf("Enter x (|x| < 0.01): ");
    scanf("%lf", &x);
    double result = 1.0 + (1.0/3.0) * x;
    printf("Cube root approximation: %.6f\n", result);
    return 0;
}
