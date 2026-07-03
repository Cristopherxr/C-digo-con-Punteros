#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

int palabras(char cadena[]);

int palabras(char cadena[])
{
    int i=0,cont=1;

    while(cadena[i]!='\0')
    {
        if(cadena[i]==' ')
        {
            cont++;
        }

        i++;
    }

    return cont;
}

int main()
{
    char cadena[100];

    printf("Ingrese una oracion: ");
    cin.getline(cadena,100);

    printf("\nNumero de palabras: %d",palabras(cadena));

    printf("\n\n");
    system("pause");
    return 0;
}