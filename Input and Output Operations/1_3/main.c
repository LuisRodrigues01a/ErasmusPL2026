#include <stdio.h>

int main() {
    int year;
    printf("Enter your birth year: ");
    scanf("%d", &year);
    printf("Previous year: %d\n", year - 1);
    return 0;
}
