#include <stdio.h>

int main() {
    int a=15;
    int*p=&a;
    // printf("%p",&a);
    printf("%d",*p);
    //printf("%p",p+1);
    // printf("%d",&p);
    return 0;
}