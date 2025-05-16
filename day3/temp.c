#include <stdio.h>

int main() 
{
    int tem;
    printf("enter temperature:");
    scanf("%d",&tem);
    if (tem<10) 
    printf("\n\n wear jacket");
    else if(tem>=10&&tem<=20) 
    printf("\n\n wear sweater");
    else if(tem>20)
    printf("\n\n wear t-shirt");
    else
    printf("\n\n   ERROR----------");
    return 0;
}
