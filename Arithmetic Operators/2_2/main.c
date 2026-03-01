#include <stdio.h>

int main() {
    int a, b;
    printf("Enter first integer: ");
    scanf("%d", &a);
    printf("Enter second integer: ");
    scanf("%d", &b);
    printf("Difference of squares: %d\n", a*a - b*b);
    return 0;
}
