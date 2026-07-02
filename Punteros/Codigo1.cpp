#include <stdio.h>
#include <stdlib.h>

void mostrar(int *);

int main()
{
    int x;

    printf("Ingrese un numero: ");
    scanf("%d",&x);

    mostrar(&x);

    return 0;
}

void mostrar(int *p)
{
    printf("\nValor: %d",*p);
    printf("\nDireccion: %p",p);
}