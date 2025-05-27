#include <stdio.h>

int main() {
    char w[100];
    printf("enter the line:");
    fgets(w, 100, stdin);
   for(int i=0;i<100;i++)
    {
        if(w[i]=='\0')
        {
            printf("number of character :%d",i-1);
            break;
        }
    }
    return 0;
}

