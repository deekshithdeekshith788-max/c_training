#include<stdio.h>
int main()
{
    float *p=(float*)malloc(5*sizeof (float));
    p[0]=3.52;
    p[1]=6,73;
    p[2]=7.10;
    p[3]=2.50;
    p[4]=9.52;
    printf("%f",p[4]);
    free(p);
}


 
