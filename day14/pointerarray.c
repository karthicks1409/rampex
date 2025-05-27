#include <stdio.h>

int main() {
    int arr[]={11,12,13,75,76};
    int*ptr=arr;
    for(int i=0;i<5;i++)
    {
        printf("%d \n",*(ptr+i));
    }
    return 0;
}