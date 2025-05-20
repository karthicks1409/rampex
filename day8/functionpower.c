#include <stdio.h>

double power(double x, int y) {
    double result = 1.0;
    int i;
    int positive = y >= 0 ? 1 : 0;
    int exp = y >= 0 ? y : -y;

    for(i = 0; i < exp; i++) {
        result *= x;
    }

    if(!positive) {
        result = 1.0 / result;
    }

    return result;
}

int main() {
    double base;
    int exponent;

    printf("Enter base: ");
    scanf("%lf", &base);
    printf("Enter exponent: ");
    scanf("%d", &exponent);

    printf("%.2lf^%d = %.2lf\n", base, exponent, power(base, exponent));
    return 0;
}
