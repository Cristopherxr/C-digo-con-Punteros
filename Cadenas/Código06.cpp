#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

void invertir(char cadena[]);

void invertir(char cadena[])
{
    int i=0,j;
    char aux;

    while(cadena[i]!='\0')
        i++;

    j=i-1;

    for(i=0;i<j;i++,j--)
    {
        aux=cadena[i];
        cadena[i]=cadena[j];
        cadena[j]=aux;
    }
}

int main()
{
    char cadena[100];

    printf("Ingrese una cadena: ");
    cin.getline(cadena,100);

    invertir(cadena);

    printf("\nCadena invertida: %s",cadena);

    printf("\n\n");
    system("pause");
    return 0;
}