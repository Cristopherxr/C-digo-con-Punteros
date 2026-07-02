#include <stdio.h>
#include <stdlib.h>

#define MAX 100

void ingresar(int *,int);
int perfectos(int *,int);

int main()
{
    int v[MAX],n;

    printf("Cantidad: ");
    scanf("%d",&n);

    ingresar(v,n);

    printf("\nCantidad de perfectos = %d",perfectos(v,n));

    return 0;
}

void ingresar(int *p,int n)
{
    int i;

    for(i=0;i<n;i++)
        scanf("%d",p+i);
}

int perfectos(int *p,int n)
{
    int i,j,suma,cont=0;

    for(i=0;i<n;i++)
    {
        suma=0;

        for(j=1;j<*(p+i);j++)
        {
            if(*(p+i)%j==0)
                suma+=j;
        }

        if(suma==*(p+i))
            cont++;
    }

    return cont;
}