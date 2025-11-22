// call by referrence
#include <stdio.h>
void sum_value(int a,int b)
{
    int sum = a+b;
    printf("%d",sum);
}
void sum_ref(int *a,int *b)
{
    int sum = *a+*b;
    printf("%d",sum);
}
void main()
{
    int a= 95;
    int b= 85;
    printf("call by value:\n");
    sum_value(a,b);// call by value
    printf("call by referrence:\n");
    sum_value(*&a,*&b);// by ref                                
}
