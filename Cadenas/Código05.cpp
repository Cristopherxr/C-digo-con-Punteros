#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

void minusculas(char cadena[]);

void minusculas(char cadena[])
{
    int i=0;

    while(cadena[i]!='\0')
    {
        if(cadena[i]>='A' && cadena[i]<='Z')
        {
            cadena[i]=cadena[i]+32;
        }

        i++;
    }
}

int main()
{
    char cadena[100];

    printf("Ingrese una cadena: ");
    cin.getline(cadena,100);

    minusculas(cadena);

    printf("\nCadena: %s",cadena);

    printf("\n\n");
    system("pause");
    return 0;
}