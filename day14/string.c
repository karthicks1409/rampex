#include <stdio.h>
#include<string.h>
int main() {
    char a[50];
    printf("enter the name:");
    fgets(a, 50, stdin);
    printf("%s",a);
    return 0;
}