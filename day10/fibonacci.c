#include <stdio.h>

void reverseFibonacci(int n, int a, int b) {
    if (n <= 0) {
        return;
    }
    reverseFibonacci(n - 1, b, a + b);
    printf("%d ", a);
}

int main() {
    int n;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    printf("Fibonacci series in reverse order: ");
    reverseFibonacci(n, 0, 1);
    printf("\n");
    return 0;
}

