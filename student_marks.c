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
    struct student *p = &s1;
    strcpy(p-> name,"raju");
    p-> age = 18;
    p-> marks = 95;
    printf("%d",p->name);
    printf("%d",p->age);
    printf("%d",p->marks);
}
