#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string>
#include <new>
#include <iostream>
#define TAM 10


using namespace std;

//Fun��o I
int buscaSimples(int vetor[TAM], int valorProcurado, int *posicaoEncontrada)
{
    int cont;
    bool valorEncontrado;

    //Percorre a lista em busca do valor
    for(cont = 0; cont < TAM; cont++)
    {
        if(vetor[cont] == valorProcurado)
        {
            valorEncontrado = true;
            *posicaoEncontrada = cont;
        }
    }

    if(valorEncontrado)
    {
        return 1;
    }
    else
    {
        return -1;
    }
}

//Fun��o II
void imprimeVetor(int vetor[TAM])
{
    int cont;

    for(cont = 0; cont < TAM; cont++)
    {
        cout << vetor[cont] << " - ";
    }
}

//PRINCIPAL
int main()
{
    setlocale(LC_ALL, "");

    //Vari�veis
    int vetor[TAM] = {2,4,6,8,10,12,14,16,18,20};
    int valorProcurado, posicao, posicaoEncontrada, cont;


    printf("\nQual n�mero deseja encontrar?");
        scanf("%d", &valorProcurado);

    if(buscaSimples(vetor, valorProcurado, &posicaoEncontrada) == true)
    {
        cout << "\nO valor foi encontrado na posi��o:" << posicaoEncontrada;
    }
    else
    {
        cout << "\nValor n�o encontrado.";
    }


    return 0;
}

