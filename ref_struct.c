#include<stdio.h>
struct score
{
    float marks;
    float rank;
};
void edit(struct score *s1)
{
    printf("%f",s1->marks);
    s1->marks = 85.33;

    printf("before change in fn:%f\n",s1->marks);
    s1->marks=75.33;
    printf("after change in fn:%f\n",s1->marks);
}
void main()
{
    struct score s1={91.5,3};
    edit(&s1);
    printf("after change in main fn:%f\n",s1.marks);
}