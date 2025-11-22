#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *p=(int*)malloc(3*sizeof (int));
    p[0]=3;
    p[1]=6;
    p[2]=7;
    p=(int*)realloc(p,5* sizeof (int));
    p[3]=2;
    p[4]=9;
    for(int i=0;i<5;i++)
    printf("%f",p[4]);
}