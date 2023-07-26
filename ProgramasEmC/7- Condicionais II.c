#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <stdbool.h>

void main ()
{
    //Para acentos
    setlocale(LC_ALL, "");

    //Definindo variáveis
    int a = 5, b = 10, c = 15;
    char d = 't';
    bool x = true, y = false;

    //Maior e maior igual
    if(a > 2)
    {
        printf("\n %d é maior que 2", a);
    }

    if(c >= b)
    {
        printf("\n %d é maior ou igual que %d", c, b);
    }

    //Menor e menor igual
    if(a < 10)
    {
        printf("\n %d é menor que 10", a);
    }

    if(a <= 10)
    {
        printf("\n %d é menor ou igual que 10", a);
    }

    //Diferente
    if(c != 10)
    {
        printf("\n %d é diferente de 10", c);
    }

    if(d != 'a')
    {
        printf("\n %c não é a letra A", d);
    }

    //Booleano Verdadeiro
    if(x)
    {
        printf("\n X é verdadeiro");
    }

     //Booleano Falso
    if(y)
    {
        printf("\n Y é verdadeiro");
    }
    else
    {
        printf("\n Y é falso");
    }

    //Comparando falsidade
    if(!y)
    {
        printf("\n Y é falso");
    }

    system("pause");
}
