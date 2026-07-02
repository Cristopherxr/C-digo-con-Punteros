#include <stdio.h>
#include <stdlib.h>

#define MAX 100

void ingresar(int *,int);
void ordenar(int *,int);
void imprimir(int *,int);

int main()
{
    int v[MAX];
    int n;

    printf("Cantidad: ");
    scanf("%d",&n);

    ingresar(v,n);

    ordenar(v,n);

    imprimir(v,n);

    return 0;
}

void ingresar(int *p,int n)
{
    int i;

    for(i=0;i<n;i++)
        scanf("%d",p+i);
}

void ordenar(int *p,int n)
{
    int i,j,aux;

    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(*(p+i)>*(p+j))
            {
                aux=*(p+i);
                *(p+i)=*(p+j);
                *(p+j)=aux;
            }
        }
    }
}

void imprimir(int *p,int n)
{
    int i;

    for(i=0;i<n;i++)
        printf("%5d",*(p+i));
}