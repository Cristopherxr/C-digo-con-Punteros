#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

int palindromo(char cadena[]);

int palindromo(char cadena[])
{
    int i=0,j;

    while(cadena[i]!='\0')
        i++;

    j=i-1;
    i=0;

    while(i<j)
    {
        if(cadena[i]!=cadena[j])
            return 0;

        i++;
        j--;
    }

    return 1;
}

int main()
{
    char cadena[100];

    printf("Ingrese una palabra: ");
    cin.getline(cadena,100);

    if(palindromo(cadena))
        printf("\nEs palindromo");
    else
        printf("\nNo es palindromo");

    printf("\n\n");
    system("pause");
    return 0;
}