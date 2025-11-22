#include<stdio.h>
#include<stdlib.h>
void main()
{
    int *p=(int*)malloc(4*sizeof (int));
    p[0]=35;
    p[1]=67;
    p[2]=70;
    p[3]=20;
    printf("%d",p[0]);
    free(p);
}

