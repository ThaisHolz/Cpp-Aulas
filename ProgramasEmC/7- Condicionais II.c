#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <stdbool.h>

void main ()
{
    //Para acentos
    setlocale(LC_ALL, "");

    //Definindo vari�veis
    int a = 5, b = 10, c = 15;
    char d = 't';
    bool x = true, y = false;

    //Maior e maior igual
    if(a > 2)
    {
        printf("\n %d � maior que 2", a);
    }

    if(c >= b)
    {
        printf("\n %d � maior ou igual que %d", c, b);
    }

    //Menor e menor igual
    if(a < 10)
    {
        printf("\n %d � menor que 10", a);
    }

    if(a <= 10)
    {
        printf("\n %d � menor ou igual que 10", a);
    }

    //Diferente
    if(c != 10)
    {
        printf("\n %d � diferente de 10", c);
    }

    if(d != 'a')
    {
        printf("\n %c n�o � a letra A", d);
    }

    //Booleano Verdadeiro
    if(x)
    {
        printf("\n X � verdadeiro");
    }

     //Booleano Falso
    if(y)
    {
        printf("\n Y � verdadeiro");
    }
    else
    {
        printf("\n Y � falso");
    }

    //Comparando falsidade
    if(!y)
    {
        printf("\n Y � falso");
    }

    system("pause");
}
