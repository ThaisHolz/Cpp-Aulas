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

    //VARI�VEIS ARMAZENAM VALORES
    int a = 20, b = 10;

    //PONTEIROS ARMAZENAM POSI��ES NA MEM�RIA
    int *ponteiro;


    ponteiro = &b;

    //Imprimindo valor
    printf("Valor de b: %d \n", b);

    // * = CONTE�DO APONTADO POR
    *ponteiro = 40;

     printf("Valor de b: %d \n", b);



     return 0;
}

