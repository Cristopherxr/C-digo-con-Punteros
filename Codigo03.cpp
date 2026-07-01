#include <stdio.h>
#include <stdlib.h>

void intercambio(int *,int *);

int main()
{
    int a,b;

    printf("Ingrese A: ");
    scanf("%d",&a);

    printf("Ingrese B: ");
    scanf("%d",&b);

    intercambio(&a,&b);

    printf("\nA=%d",a);
    printf("\nB=%d",b);

    return 0;
}

void intercambio(int *x,int *y)
{
    int aux;

    aux=*x;
    *x=*y;
    *y=aux;
}
