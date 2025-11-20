#include<stdio.h>
#include<string.h>
void main()
{
    char des [100] = "we are super stars";
    char se [10] = "excellent";
    if ((strstr(des,se))!=NULL)
    printf("found");
    else
    printf("not found");   
}
