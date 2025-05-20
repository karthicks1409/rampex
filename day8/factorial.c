#include <stdio.h>

long int factorial(long int num)
{
    long int fac=1;
    while(num>=1)
    {
        fac=fac * num;
        num--;
    }
printf("\n factorial is : %ld ",fac);
return 0;
}
int main()
{
    factorial(5);
    return 0;
}
