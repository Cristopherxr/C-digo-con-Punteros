#include <stdio.h>
#include <stdlib.h>

#define MAX 100

void ingresar(int *,int);
int pares(int *,int);

int main()
{
    int v[MAX];
    int n;

    printf("Cantidad: ");
    scanf("%d",&n);

    ingresar(v,n);

    printf("\nCantidad de pares = %d",pares(v,n));

    return 0;
}

void ingresar(int *p,int n)
{
    int i;

    for(i=0;i<n;i++)
    {
        printf("v[%d]=",i);
        scanf("%d",p+i);
    }
}

int pares(int *p,int n)
{
    int i,cont=0;

    for(i=0;i<n;i++)
    {
        if(*(p+i)%2==0)
            cont++;
    }

    return cont;
}
