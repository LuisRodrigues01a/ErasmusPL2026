#include <stdio.h>
#include <math.h>

int main() {
    double a, b, hyp;
    printf("Enter leg a: ");
    scanf("%lf", &a);
    printf("Enter leg b: ");
    scanf("%lf", &b);
    hyp = sqrt(a * a + b * b);
    printf("Hypotenuse: %.4f\n", hyp);
    return 0;
}
