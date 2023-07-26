#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main ()
{
    setlocale(LC_ALL, "");

    //Variáveis
    int cont, i, valor;

    //Tabuada
    for(cont = 1; cont <= 10; cont++)
    {
        printf("\n5 X %d = %d", cont, 5 * cont);
    }

    //Contando de 2 em 2
    for(cont = 0; cont <= 10; cont = cont + 2)
    {
        printf("\n%d", cont);
    }

    //Contagem regressiva
    for(cont = 10; cont > 0; cont--)
    {
        printf("\n%d", cont);
    }

    //Números pares de 10 a 20
    for(i = 10; i <= 20; i++)
    {
        if(i % 2 == 0)
        {
            printf("\n%d", i);
        }
    }


    system("pause");
}
