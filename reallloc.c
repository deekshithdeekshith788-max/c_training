// write c program with a function of variable function
#include <stdio.h>
#include <stdarg.h>
void add(int count,...)
{
    int result;
    va_list list;
    va_start(list,count);
    for(int i=1;i<=count;i++)
    {
        int n=va_arg(list,int);
        result = result + n;
    }
    va_end(list);
    printf("%d",result);
}
void main()
{

    add(6,10,20,30,40,50);
}


