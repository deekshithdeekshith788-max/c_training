#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct student 
{
    char name[100];
    int age;
    float marks;
};
void main()
{
    struct student s1;
    s1.age=18;
    s1.marks=90.5;
    strcpy(s1.name,"raj");

    struct student s2;
    s2.age=18;
    s2.marks=85.5;
    strcpy(s2.name,"ram");

    struct student s3 ={"rahul",17,98};

    printf("%s",s3.name);
    printf("%s",s2.name);
    printf("%s",s1.name);
}



