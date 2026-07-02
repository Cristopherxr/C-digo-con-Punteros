#include <stdio.h>
#include <stdlib.h>

#define MAX 100

void ingresar(int *,int);
void buscar(int *,int,int);

int main()
{
    int v[MAX];
    int n,x;

    printf("Cantidad: ");
    scanf("%d",&n);

    ingresar(v,n);

    printf("Numero a buscar: ");
    scanf("%d",&x);

    buscar(v,n,x);

    return 0;
}

void ingresar(int *p,int n)
{
    int i;

    for(i=0;i<n;i++)
        scanf("%d",p+i);
}

void buscar(int *p,int n,int x)
{
    int i,band=0;

    for(i=0;i<n;i++)
    {
        if(*(p+i)==x)
        {
            printf("\nEncontrado en la posicion %d",i);
            band=1;
        }
    }

    if(band==0)
        printf("\nNumero no encontrado");
}
