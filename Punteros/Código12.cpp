#include <stdio.h>
#include <stdlib.h>

#define MAX 100

void ingresar(int *,int);
int impares(int *,int);

int main()
{
    int v[MAX];
    int n;

    printf("Cantidad: ");
    scanf("%d",&n);

    ingresar(v,n);

    printf("\nCantidad de impares = %d",impares(v,n));

    return 0;
}

void ingresar(int *p,int n)
{
    int i;

    for(i=0;i<n;i++)
        scanf("%d",p+i);
}

int impares(int *p,int n)
{
    int i,cont=0;

    for(i=0;i<n;i++)
    {
        if(*(p+i)%2!=0)
            cont++;
    }

    return cont;
}
