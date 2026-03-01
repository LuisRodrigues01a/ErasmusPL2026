#include <stdio.h>

int main() {
    float a = 1e8f, b = -1e8f, c = 1.0f;

    float r1 = (a + b) + c;
    float r2 = a + (b + c);

    printf("(a + b) + c = %.1f\n", r1);
    printf("a + (b + c) = %.1f\n", r2);
    printf("Are they equal? %s\n", r1 == r2 ? "Yes" : "No");
    return 0;
}
