// create a structure with three variables name of the car, maximaum speed ,price store these in a array of structures and display that
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct car
{
    char name[100];
    char speed[100];
    int price;
};
void main()
{
    int n;
    printf("enter number of cars:");
    scanf("%d",&n);
    struct car c[n];
    for(int i=0; i<n; i++)
    {
        printf("enter name of the car:");
        scanf("%s",c[i].name);

        printf("enter m speed:");
        scanf("%s",c[i].speed);

        printf("enter price of the car:2");
        scanf("%d",&c[i].price);
    }
}
