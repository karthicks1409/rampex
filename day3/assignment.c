#include <stdio.h>
int main()
{
    int a, b;
    a = 10;
    printf("Value of a: %d\n", a);
    b = 5;
    b += a; 
    printf("Value of b after +=: %d\n", b);
    b -= a; 
    printf("Value of b after -=: %d\n", b);
    b *= a; 
    printf("Value of b after *=: %d\n", b);
    b /= a; 
    printf("Value of b after /=: %d\n", b);
    b %= 3; 
    printf("Value of b after %%=: %d\n", b);

    return 0;
}