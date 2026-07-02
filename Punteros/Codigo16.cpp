#include <stdio.h>
#include <stdlib.h>

#define MAX 100

void ingresar(int *,int);
int primos(int *,int);

int main()
{
    int v[MAX],n;

    printf("Cantidad: ");
    scanf("%d",&n);

    ingresar(v,n);

    printf("\nCantidad de primos = %d",primos(v,n));

    return 0;
}

void ingresar(int *p,int n)
{
    int i;

    for(i=0;i<n;i++)
        scanf("%d",p+i);
}

int primos(int *p,int n)
{
    int i,j,cont=0,band;

    for(i=0;i<n;i++)
    {
        band=1;

        if(*(p+i)<2)
            band=0;

        for(j=2;j<*(p+i);j++)
        {
            if(*(p+i)%j==0)
            {
                band=0;
                break;
            }
        }

        if(band==1)
            cont++;
    }

    return cont;
}