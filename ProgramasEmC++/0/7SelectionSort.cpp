#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string>
#include <new>
#include <iostream>
#define TAM 10

using namespace std;

//Função Imprimir
void imprime_Vetor(int vetor[])
{
    int i;

    cout << "\n";

    for(i = 0; i < TAM; i++)
    {
        cout << " |" << vetor[i] << "| ";
    }
}

//Função 1
void selection_Sort(int vetor[TAM])
{
    int posicaoMenorValor, aux, i, j;

    for(i = 0; i < TAM; i++)
    {
        //Recebe a posição inicial
        posicaoMenorValor = i;

        //Analiza os elementos na frente
        for(j = i + 1; j < TAM; j++)
        {
            //Caso encontre um valor menor na frente dos analizados
            if(vetor[j] < vetor[posicaoMenorValor])
            {
                posicaoMenorValor = j;
            }
        }
        //Verifica se houve mudança e troca os valores
        if(posicaoMenorValor != i)
        {
            aux = vetor[i];
            vetor[i] = vetor[posicaoMenorValor];
            vetor[posicaoMenorValor] = aux;
        }
        imprime_Vetor(vetor);
    }
}

//PRINCIPAL
int main()
{
    setlocale(LC_ALL, "");

    //Variáveis
    int vetor[TAM] = {10,9,8,7,6,5,4,3,2,1};

    //
    selection_Sort(vetor);

    imprime_Vetor(vetor);


    return 0;
}
