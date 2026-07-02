#include <stdio.h>
#include <stdlib.h>

#define MAX 100

void ingresar(int *,int);
int menor(int *,int);

int main()
{
    int v[MAX];
    int n;

    printf("Cantidad: ");
    scanf("%d",&n);

    ingresar(v,n);

    printf("\nMenor = %d",menor(v,n));

    return 0;
}

void ingresar(int *p,int n)
{
    int i;

    for(i=0;i<n;i++)
        scanf("%d",p+i);
}

int menor(int *p,int n)
{
    int i,m;

    m=*p;

    for(i=1;i<n;i++)
    {
        if(*(p+i)<m)
            m=*(p+i);
    }

    return m;
}
