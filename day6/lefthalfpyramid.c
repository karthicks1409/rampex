#include <stdio.h>
 int main()
 {
    int i,j,rows=6;
    for(i=rows;i>=1;--i)
    {
        for(j=1;j<=i;++j)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
 }