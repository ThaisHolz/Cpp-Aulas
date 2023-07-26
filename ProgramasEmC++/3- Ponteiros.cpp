#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <iostream>
#include <string>
#include <locale.h>

using namespace std;

int main()
{
    setlocale(LC_ALL, "");

    //VARIÁVEIS ARMAZENAM VALORES
    int a = 20, b = 10;

    //PONTEIROS ARMAZENAM POSIÇÕES NA MEMÓRIA
    int *ponteiro;


    ponteiro = &b;

    //Imprimindo valor
    printf("Valor de b: %d \n", b);

    // * = CONTEÚDO APONTADO POR
    *ponteiro = 40;

     printf("Valor de b: %d \n", b);



     return 0;
}

