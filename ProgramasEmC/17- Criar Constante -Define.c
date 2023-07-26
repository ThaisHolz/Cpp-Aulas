#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define TAM 10

void main ()
{
    setlocale(LC_ALL, "");

    //Imprime da tela
    printf("%d", TAM);

    //Variáveis
    int i;

    //Contagem até 10
    for(i = 1; i <= TAM; i++)
    {
        printf("\n%d", i);
    }

    system("pause");
}
