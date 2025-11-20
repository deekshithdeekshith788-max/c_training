#include<stdio.h>

int addarr(int arr[],int size)
{
    int result = 0;
    for (int i = 0; i<size;i++)
    {
        result=result+arr[1];
    }
    return result;

}
void main()
{
    int arr[4]={22,33,44,55};
    int size=4;
    printf("%d",addarr ,size); 
}