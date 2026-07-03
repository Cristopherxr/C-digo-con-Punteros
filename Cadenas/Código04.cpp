#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

void mayusculas(char cadena[]);

void mayusculas(char cadena[])
{
    int i=0;

    while(cadena[i]!='\0')
    {
        if(cadena[i]>='a' && cadena[i]<='z')
        {
            cadena[i]=cadena[i]-32;
        }

        i++;
    }
}

int main()
{
    char cadena[100];

    printf("Ingrese una cadena: ");
    cin.getline(cadena,100);

    mayusculas(cadena);

    printf("\nCadena: %s",cadena);

    printf("\n\n");
    system("pause");
    return 0;
}