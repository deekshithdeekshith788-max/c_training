#include<stdio.h>
#include<stdlib.h>
void main()
{
    float *p=(float*)malloc(4*sizeof (float));
    p[0]=3.5;
    p[1]=6.7;
    p[2]=7.0;
    p[3]=2.0;
    printf("%d",p[2]);
    free(p);
}


    