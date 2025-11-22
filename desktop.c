// write a c program which add three numbers and call it by referrence
#include<stdio.h>
void sum_value(int a,int b,int c)
{
    int add = a+b+c;
    printf("%d",add);
}
void sum_ref(int *a,int *b,int *c)
{
    int sum = *a + *b + *c ;
    printf("%d",sum);
}
void main()
{
    int a = 45;
    int b = 60;
    int c = 25;
    printf("call by value:\n");
    sum_value(a,b,c);//call by value
    printf("call by referrence:\n");
    sum_value(*&a,*&b,*&c);//call by ref
}