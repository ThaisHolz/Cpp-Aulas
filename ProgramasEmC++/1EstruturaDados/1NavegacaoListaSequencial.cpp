#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string>
#include <new>
#include <iostream>
#define TAM 3

using namespace std;

//Função 1
int* alocaVetor(int tam)
{
    int *v;

    v = (int *) malloc(tam * sizeof(int));

    return v;
}


//Função Imprimir SEQUENCIAL
void imprime_Sequencial(int *vetor, int tamanhoDaListaSequencial)
{
    int cont;

    for(cont = 0; cont < tamanhoDaListaSequencial; cont++)
    {
        printf("\nValor %d: %d", cont, vetor[cont]);
    }
}

//PRINCIPAL
int main()
{
    setlocale(LC_ALL, "");

    //VARIÁVEIS
    int vetor[TAM] = {1,2,3};
    int cont, tamanhoDaLista;

    //
    imprime_Sequencial(vetor, 3);

    //Lendo novos valores
    for(cont = 0; cont < TAM; cont++)
    {
        scanf("\n%d:", &vetor[cont]);
    }

    imprime_Sequencial(vetor, 3);

    //
    printf("\nDigite o tamanho do vetor:");
        scanf("%d", &tamanhoDaLista);

    //Ponteiro para o novo vetor
    int *vetorLidoNaHoras;

    vetorLidoNaHoras = alocaVetor(tamanhoDaLista);

    //Lendo novos valores II
    for(cont = 0; cont < tamanhoDaLista; cont++)
    {
        scanf("\n%d:", &vetorLidoNaHoras[cont]);
    }

    imprime_Sequencial(vetorLidoNaHoras, tamanhoDaLista);

    return 0;
}

