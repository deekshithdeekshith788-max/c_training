#include <stdio.h>
void names (char first[],char last[])
{
    int i=0;
    char full[100];
    while (first[i]!='\0')
    {
        full[i]=first[i];
        i++;
    }
    full[i]=' ';
    i++;
    int j=0;
    while(last[j]!='\0')
    {
        full[i]=last[j];
        i++;
        j++;
    }

    printf("%s\n",full);
}
void main()
{
    char first[10] = "raj";
    char last[10] = "Kumar";
    names(first,last);
}