// write function which will multiply by three numbers call by referrence
#include <stdio.h>
void prod_value(int a,int b,int c)
{
    int prod = a*b*c;
    printf("%d",prod);
}
void prod_ref (int *a,int *b,int *c)
{
    int prod = *a**b**c;
    printf("%d",prod);
}
void main()
{
    int a = 50;
    int b = 60;
    int c = 70;
    printf("call by value:\n");
    prod_value(a,b,c);//call by value
    printf("call by referrence:\n");
    prod_value(*&a,*&b,*&c);//call by ref
}
