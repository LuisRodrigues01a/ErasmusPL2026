#include <stdio.h>

int main() {
    int a, b;
    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);
    double result = (double)(a + b) / (a - b);
    printf("Quotient: %.4f\n", result);
    return 0;
}
