#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

int comparar(char c1[],char c2[]);

int comparar(char c1[],char c2[])
{
    int i=0;

    while(c1[i]!='\0' && c2[i]!='\0')
    {
        if(c1[i]!=c2[i])
            return 0;

        i++;
    }

    if(c1[i]==c2[i])
        return 1;
    else
        return 0;
}

int main()
{
    char c1[100],c2[100];

    printf("Ingrese cadena 1: ");
    cin.getline(c1,100);

    printf("Ingrese cadena 2: ");
    cin.getline(c2,100);

    if(comparar(c1,c2))
        printf("\nLas cadenas son iguales");
    else
        printf("\nLas cadenas son diferentes");

    printf("\n\n");
    system("pause");
    return 0;
}