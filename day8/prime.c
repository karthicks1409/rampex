#include <stdio.h>

int isprime(int n) {
    if (n < 2) {
        return 0;
    }

    int i;
    for (i = 2; i <= n / 2; i++) {
        if (n % i == 0) {
            return 0;
        }
    }

    return 1;
}
int main() {
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);

    if (Prime(number))
        printf("%d is a prime number.\n", number);
    else
        printf("%d is not a prime number.\n", number);

    return 0;
}