#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

void main ()
{
    setlocale(LC_ALL, "");

    //Respons�vel por alimentar o rand de forma diferente
    srand((unsigned)time(NULL));

    //Vari�veis que recebe o resto da divis�o do n� por 3
    //aleatorio entre 0 e 2
    int aleatorio = rand() % 3;

    //Vari�veis que recebe o resto da divis�o do n� por 5
    //aleatorio entre 1 e 5
     int aleatorio2 = (rand() % 5) + 1;

        printf("%d", aleatorio2);

    //Outra forma
     aleatorio2 = (rand() % 5) + 1;

        printf("\n%d", aleatorio2);

}
