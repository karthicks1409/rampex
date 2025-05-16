#include <stdio.h>
int main()
 {
    int num = 2; 
    printf("Even numbers between 1 and 50:\n");
    while (num <= 50)
     {
        printf("%d\n", num);
        num += 2; 
    }
    return 0;
}