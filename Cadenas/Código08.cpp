#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

int contar(char cadena[],char letra);

int contar(char cadena[],char letra)
{
    int i=0,cont=0;

    while(cadena[i]!='\0')
    {
        if(cadena[i]==letra)
            cont++;

        i++;
    }

    return cont;
}

int main()
{
    char cadena[100];
    char letra;

    printf("Ingrese una cadena: ");
    cin.getline(cadena,100);

    printf("Ingrese una letra: ");
    cin>>letra;

    printf("\nLa letra aparece %d veces",contar(cadena,letra));

    printf("\n\n");
    system("pause");
    return 0;
}