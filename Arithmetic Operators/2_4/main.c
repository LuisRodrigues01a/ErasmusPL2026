#include <stdio.h>
#include <math.h>

int main() {
    int a, b, c;
    printf("Enter three integers: ");
    scanf("%d %d %d", &a, &b, &c);
    double result = cbrt((double)abs(a) * abs(b) * abs(c));
    printf("Geometric mean: %.4f\n", result);
    return 0;
}
