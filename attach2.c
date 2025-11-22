#include <stdio.h>
void names (char first[],char last[],int sw)
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
    int j=1;
    while(last[j]!='\0')
    {
        full[i]=last[j];
        i++;
        j++;
    }
    full[i]=' ';
    printf("%s",full);
    int len=i+1;
    if(len<sw)
    printf("fits in the screen");
    else
    printf("does not fit in the screen");
}
void main()
{
    char first[10]="raj";
    char last[10]="Kumar";
    int sw=15;
    names (first,last,sw);
}
