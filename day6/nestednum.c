#include <stdio.h>
int main() 
{
    int n, i, j, k;
    printf("Enter the number of rows: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++) 
    {
        for(k = i; k >= 1; k--)
         {
            printf("%d ", k);
        }
        printf("\n");
    }
    return 0;
}