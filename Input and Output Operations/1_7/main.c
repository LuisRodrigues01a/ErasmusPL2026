#include <stdio.h>

int main() {
    double dollars, euros;
    printf("Enter amount in dollars: ");
    scanf("%lf", &dollars);
    euros = dollars * 0.85;
    printf("%.2f dollars = %.2f euros\n", dollars, euros);
    return 0;
}
