#include <stdio.h>

int reverseNumber(int num) {
    int rev = 0;
    while (num != 0) {
        rev = rev * 10 + num % 10;
        num /= 10;
    }
    return rev;
}

int main() {
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);

    int reversed = reverseNumber(number);
    printf("Reversed number: %d\n", reversed);

    return 0;
}