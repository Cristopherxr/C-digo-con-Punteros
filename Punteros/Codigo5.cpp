#include <stdio.h>
#include <stdlib.h>

void mayor(int *,int *);

int main()
{
    int a,b;

    printf("Ingrese A: ");
    scanf("%d",&a);

    printf("Ingrese B: ");
    scanf("%d",&b);

    mayor(&a,&b);

    return 0;
}

void mayor(int *a,int *b)
{
    if(*a>*b)
        printf("\nEl mayor es %d",*a);
    else
        printf("\nEl mayor es %d",*b);
}