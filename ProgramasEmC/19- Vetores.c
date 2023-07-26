#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define TAM 3

void main ()
{
    setlocale(LC_ALL, "");

    //Variáveis
    int vetor[TAM], cont;

    //Passando valores para o vetor
    vetor[0] = 5;
    vetor[1] = 10;
    vetor[2] = 15;

    printf("\nPosição 0: %d", vetor[0]);
    printf("\nPosição 1: %d", vetor[1]);
    printf("\nPosição 2: %d", vetor[2]);

    //Vetor em laço de repetição
    for(cont = 0; cont < TAM; cont++)
    {
        printf("\nPosição %d : %d", cont, vetor[cont]);
    }

    //Lendo 3 valores novos para o vetor
    for(cont = 0; cont < TAM; cont++)
    {
        scanf("\n%d",&vetor[cont]);
    }

    //Imprimindo em um laço de repetição
    for(cont = 0; cont < TAM; cont++)
    {
        printf("\nPosição %d : %d", cont, vetor[cont]);
    }

    system("pause");
}
