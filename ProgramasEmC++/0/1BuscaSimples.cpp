#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string>
#include <new>
#include <iostream>
#define TAM 10


using namespace std;

//Função I
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

//Função II
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

    //Variáveis
    int vetor[TAM] = {2,4,6,8,10,12,14,16,18,20};
    int valorProcurado, posicao, posicaoEncontrada, cont;


    printf("\nQual número deseja encontrar?");
        scanf("%d", &valorProcurado);

    if(buscaSimples(vetor, valorProcurado, &posicaoEncontrada) == true)
    {
        cout << "\nO valor foi encontrado na posição:" << posicaoEncontrada;
    }
    else
    {
        cout << "\nValor não encontrado.";
    }


    return 0;
}

