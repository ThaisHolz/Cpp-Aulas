#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define TAM 3

void main ()
{
    setlocale(LC_ALL, "");

    //Vari�veis
    int vetor[TAM], cont;

    //Passando valores para o vetor
    vetor[0] = 5;
    vetor[1] = 10;
    vetor[2] = 15;

    printf("\nPosi��o 0: %d", vetor[0]);
    printf("\nPosi��o 1: %d", vetor[1]);
    printf("\nPosi��o 2: %d", vetor[2]);

    //Vetor em la�o de repeti��o
    for(cont = 0; cont < TAM; cont++)
    {
        printf("\nPosi��o %d : %d", cont, vetor[cont]);
    }

    //Lendo 3 valores novos para o vetor
    for(cont = 0; cont < TAM; cont++)
    {
        scanf("\n%d",&vetor[cont]);
    }

    //Imprimindo em um la�o de repeti��o
    for(cont = 0; cont < TAM; cont++)
    {
        printf("\nPosi��o %d : %d", cont, vetor[cont]);
    }

    system("pause");
}
