#include <stdio.h>
#include <stdlib.h>

void promedio(float *,float *,float *,float *);

int main()
{
    float n1,n2,n3,prom;

    printf("Nota 1: ");
    scanf("%f",&n1);

    printf("Nota 2: ");
    scanf("%f",&n2);

    printf("Nota 3: ");
    scanf("%f",&n3);

    promedio(&n1,&n2,&n3,&prom);

    printf("\nPromedio = %.2f",prom);

    if(prom>=14)
        printf("\nAprobado");
    else
        printf("\nReprobado");

    return 0;
}

void promedio(float *a,float *b,float *c,float *p)
{
    *p=(*a+*b+*c)/3;
}