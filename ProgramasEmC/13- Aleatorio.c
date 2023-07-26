#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

void main ()
{
    setlocale(LC_ALL, "");

    //Responsável por alimentar o rand de forma diferente
    srand((unsigned)time(NULL));

    //Variáveis que recebe o resto da divisão do nº por 3
    //aleatorio entre 0 e 2
    int aleatorio = rand() % 3;

    //Variáveis que recebe o resto da divisão do nº por 5
    //aleatorio entre 1 e 5
     int aleatorio2 = (rand() % 5) + 1;

        printf("%d", aleatorio2);

    //Outra forma
     aleatorio2 = (rand() % 5) + 1;

        printf("\n%d", aleatorio2);

}
