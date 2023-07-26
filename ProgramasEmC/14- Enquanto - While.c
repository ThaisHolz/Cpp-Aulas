#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main ()
{
    setlocale(LC_ALL, "");

    //Variáveis
    int a = 1, b = 10;

    //Contando até 10
    while(a <= 10)
    {
        printf("\n%d", a);

        //Incremento
        a++;    //a = a + 1;
    }

    //Contagem regressiva
    while (b >= 1)
    {
        printf("\n%d", b);

        b--;    //b = b - 1;
    }

    system("pause");
}
