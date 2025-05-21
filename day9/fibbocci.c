#include <stdio.h>
void fibbo(int n) {
    int a = 0, b = 1, temp, i;

    printf("Fibonacci Series: ");
    for (i = 0; i < n; i++) {
        printf("%d ", a);
        temp = a + b;
        a = b;
        b = temp;
    }
    printf("\n");
}

int main() {
    int n;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    fibbo(n);
    return 0;
}
