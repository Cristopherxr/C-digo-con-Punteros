#include <stdio.h>
#include <stdlib.h>

#define MAX 100

void ingresar(int *,int);
int suma(int *,int);

int main()
{
    int v[MAX];
    int n;

    printf("Cantidad: ");
    scanf("%d",&n);

    ingresar(v,n);

    printf("\nSuma = %d",suma(v,n));

    return 0;
}

void ingresar(int *p,int n)
{
    int i;

    for(i=0;i<n;i++)
        scanf("%d",p+i);
}

int suma(int *p,int n)
{
    int i,s=0;

    for(i=0;i<n;i++)
        s=s+*(p+i);

    return s;
}
