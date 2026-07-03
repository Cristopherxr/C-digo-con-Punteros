#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

int longitud(char cadena[]);

int longitud(char cadena[])
{
    int i=0;

    while(cadena[i]!='\0')
    {
        i++;
    }

    return i;
}

int main()
{
    char cadena[100];
    int tam;

    printf("Ingrese una cadena: ");
    cin.getline(cadena,100);

    tam=longitud(cadena);

    printf("\nLa longitud de la cadena es: %d",tam);

    printf("\n\n");
    system("pause");
    return 0;
}