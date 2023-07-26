#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main ()
{
    //Para acentos
    setlocale(LC_ALL, "");

    //Variáveis
    int a = 10;

    //Conectivo lógico E (and = &&)
    if (a > 5 && a < 15)
    {
        printf("\n A variável a está entre 5 e 15 ");
    }

    //Conectivo lógico OU (or = ||)
    if (a > 5 || a < 15)
    {
        printf("\n A variável a é maior que 5 ou 15 ");
    }

    //Misturando os conectivos
    if ((a > 5 && a < 15) || a == 20)
    {
        printf("\n A variável a está entre 5 e 15 ou ela vale 20");
    }

    system("pause");
}
