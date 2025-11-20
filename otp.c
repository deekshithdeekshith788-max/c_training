// write c function which will accept three parameters l,b,h and returns volume of the cube 
#include<stdio.h>
int vol(int l,int b,int h)
{
    int prod=l*b*h;
    return prod;
}
void main()
{
    int l=4,b=4,h=4;
    printf("%d\n",vol(l,b,h));
}
