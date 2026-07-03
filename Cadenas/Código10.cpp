#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

void reemplazar(char cadena[],char a,char b);

void reemplazar(char cadena[],char a,char b)
{
    int i=0;

    while(cadena[i]!='\0')
    {
        if(cadena[i]==a)
            cadena[i]=b;

        i++;
    }
}

int main()
{
    char cadena[100];
    char buscar,reemplazo;

    printf("Ingrese una cadena: ");
    cin.getline(cadena,100);

    printf("Caracter a buscar: ");
    cin>>buscar;

    printf("Caracter de reemplazo: ");
    cin>>reemplazo;

    reemplazar(cadena,buscar,reemplazo);

    printf("\nNueva cadena: %s",cadena);

    printf("\n\n");
    system("pause");
    return 0;
}