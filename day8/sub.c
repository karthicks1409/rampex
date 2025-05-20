#include <stdio.h>
int sub(int a, int b)
{
    return a-b;
}

int main() 
{
    int num1,num2,result;
    printf("enter two numbers:");
    scanf("%d%d",&num1,&num2);
    result = sub(num1 , num2);
    printf("difference is %d\n",result);
    return 0;
}