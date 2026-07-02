#include <stdio.h>
#include <stdlib.h>

#define MAX 100

void ingresar(int *,int);
void mayorMenor(int *,int);

int main()
{
    int v[MAX],n;

    printf("Cantidad: ");
    scanf("%d",&n);

    ingresar(v,n);

    mayorMenor(v,n);

    return 0;
}

void ingresar(int *p,int n)
{
    int i;

    for(i=0;i<n;i++)
        scanf("%d",p+i);
}

void mayorMenor(int *p,int n)
{
    int i,mayor,menor;

    mayor=*p;
    menor=*p;

    for(i=1;i<n;i++)
    {
        if(*(p+i)>mayor)
            mayor=*(p+i);

        if(*(p+i)<menor)
            menor=*(p+i);
    }

    printf("\nMayor = %d",mayor);
    printf("\nMenor = %d",menor);
}
