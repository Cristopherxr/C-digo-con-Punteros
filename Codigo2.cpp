#include <stdio.h>
#include <stdlib.h>

void modificar(int *);

int main()
{
    int x;

    printf("Ingrese un numero: ");
    scanf("%d",&x);

    modificar(&x);

    printf("\nNuevo valor: %d",x);

    return 0;
}

void modificar(int *p)
{
    *p=*p+10;
}