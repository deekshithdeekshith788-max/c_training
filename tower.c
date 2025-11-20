// write a c function which will accept an array its size as n,and returns the difference between first and last elements
#include<stdio.h>
#include<stdlib.h>

int sub_arr (int arr[],int n)
{
    int sub = arr[0]-arr[n-1]
    return abs(sub);
}
    
void main()
{
    int arr[4]={12,34,56,78};
    int n = 4;
    printf("%d",sub_arr,n);
}
