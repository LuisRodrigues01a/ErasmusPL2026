#include <stdio.h>

int main() {
    double a, b, c;
    printf("Enter three non-zero numbers: ");
    scanf("%lf %lf %lf", &a, &b, &c);
    double result = 1.0 / (1.0/a + 1.0/b + 1.0/c);
    printf("Result: %.4f\n", result);
    return 0;
}
