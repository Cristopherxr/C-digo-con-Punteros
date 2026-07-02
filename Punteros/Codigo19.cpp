#include <stdio.h>
#include <stdlib.h>

#define MAX 100

void ingresar(int *,int);
void copiar(int *,int *,int);
void imprimir(int *,int);

int main()
{
    int a[MAX],b[MAX],n;

    printf("Cantidad: ");
    scanf("%d",&n);

    ingresar(a,n);

    copiar(a,b,n);

    printf("\nArreglo copiado:\n");
    imprimir(b,n);

    return 0;
}

void ingresar(int *p,int n)
{
    int i;

    for(i=0;i<n;i++)
        scanf("%d",p+i);
}

void copiar(int *a,int *b,int n)
{
    int i;

    for(i=0;i<n;i++)
        *(b+i)=*(a+i);
}

void imprimir(int *p,int n)
{
    int i;

    for(i=0;i<n;i++)
        printf("%5d",*(p+i));

    printf("\n");
}