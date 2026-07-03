#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

int vocales(char cadena[]);

int vocales(char cadena[])
{
    int i=0,cont=0;

    while(cadena[i]!='\0')
    {
        if(cadena[i]=='a'||cadena[i]=='e'||cadena[i]=='i'||cadena[i]=='o'||cadena[i]=='u'||
           cadena[i]=='A'||cadena[i]=='E'||cadena[i]=='I'||cadena[i]=='O'||cadena[i]=='U')
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

    printf("Ingrese una cadena: ");
    cin.getline(cadena,100);

    printf("\nNumero de vocales: %d",vocales(cadena));

    printf("\n\n");
    system("pause");
    return 0;
}