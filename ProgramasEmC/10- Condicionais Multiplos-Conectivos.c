#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main ()
{
    //Para acentos
    setlocale(LC_ALL, "");

    //Vari�veis
    int a = 10;

    //Conectivo l�gico E (and = &&)
    if (a > 5 && a < 15)
    {
        printf("\n A vari�vel a est� entre 5 e 15 ");
    }

    //Conectivo l�gico OU (or = ||)
    if (a > 5 || a < 15)
    {
        printf("\n A vari�vel a � maior que 5 ou 15 ");
    }

    //Misturando os conectivos
    if ((a > 5 && a < 15) || a == 20)
    {
        printf("\n A vari�vel a est� entre 5 e 15 ou ela vale 20");
    }

    system("pause");
}
