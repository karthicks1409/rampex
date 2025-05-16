#include <stdio.h>

int main() {
    int a = 10, b = 20;

    // Increment operator
    printf("Initial value of a: %d\n", a);
    a++; // Post-increment
    printf("Value of a after post-increment: %d\n", a);
    ++a; // Pre-increment
    printf("Value of a after pre-increment: %d\n", a);

    // Decrement operator
    printf("\nInitial value of b: %d\n", b);
    b--; // Post-decrement
    printf("Value of b after post-decrement: %d\n", b);
    --b; // Pre-decrement
    printf("Value of b after pre-decrement: %d\n", b);

    return 0;
}