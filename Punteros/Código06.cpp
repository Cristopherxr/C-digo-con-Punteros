#include <stdio.h>
#include <stdlib.h>

#define MAX 100

void ingresar(int *, int);
void imprimir(int *, int);

int main()
{
    int v[MAX];
    int n;

    printf("Ingrese el numero de elementos: ");
    scanf("%d",&n);

    ingresar(v,n);

    printf("\nArreglo:\n");
    imprimir(v,n);

    return 0;
}

void ingresar(int *p, int n)
{
    int i;

    for(i=0;i<n;i++)
    {
        printf("v[%d]=",i);
        scanf("%d",p+i);
    }
}

void imprimir(int *p, int n)
{
    int i;

    for(i=0;i<n;i++)
        printf("%5d",*(p+i));

    printf("\n");
}
