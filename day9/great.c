#include<stdio.h>

void great(char name[]) {
    printf("welcome to tcs \n");
    printf("karthi \n");
    scanf("%s", name);
}

int main() {
    char name[100];
    great(name);
    return 0;
}