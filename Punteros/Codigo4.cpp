#include <stdio.h>
#include <stdlib.h>

void suma(int *,int *,int *);

int main()
{
    int a,b,r;

    printf("Ingrese A: ");
    scanf("%d",&a);

    printf("Ingrese B: ");
    scanf("%d",&b);

    suma(&a,&b,&r);

    printf("\nSuma=%d",r);

    return 0;
}

void suma(int *a,int *b,int *r)
{
    *r=*a+*b;
}