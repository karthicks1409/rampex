#include <stdio.h>
int main()
{
    int arr[]={50,12,30,25,5};
    int*start=arr; 
    int *end=arr+3,tem;
    tem=*start;
    *start=*end;
    *end=tem;
    for(int i=0;i<=4;i++)
    {
        printf("%d \n",arr[i]);
    }
   
    return 0;
}