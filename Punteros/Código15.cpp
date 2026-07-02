#include <stdio.h>
#include <stdlib.h>

#define MAX 100

void ingresar(int *,int);
void invertir(int *,int);
void imprimir(int *,int);

int main()
{
    int v[MAX];
    int n;

    printf("Cantidad: ");
    scanf("%d",&n);

    ingresar(v,n);

    invertir(v,n);

    imprimir(v,n);

    return 0;
}

void ingresar(int *p,int n)
{
    int i;

    for(i=0;i<n;i++)
        scanf("%d",p+i);
}

void invertir(int *p,int n)
{
    int i,aux;

    for(i=0;i<n/2;i++)
    {
        aux=*(p+i);
        *(p+i)=*(p+n-1-i);
        *(p+n-1-i)=aux;
    }
}

void imprimir(int *p,int n)
{
    int i;

    for(i=0;i<n;i++)
        printf("%5d",*(p+i));
}
