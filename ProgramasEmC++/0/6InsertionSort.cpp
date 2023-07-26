#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string>
#include <new>
#include <iostream>
#define TAM 10

using namespace std;

//Fun��o Imprimir
void imprime_Vetor(int vetor[])
{
    int i;

    cout << "\n";

    for(i = 0; i < TAM; i++)
    {
        cout << " |" << vetor[i] << "| ";
    }
}

//Fun��o 1
void insertion_Sort(int vetor[TAM])
{
    int i, j, atual;

    for(i = 1; i < TAM; i++)
    {
        atual = vetor[i];       //Elemento em an�lise

        j = i - 1;              //Elemento anterior

        while((j >= 0) && (atual < vetor[j]))  //Analizando membros anteriores
        {
            vetor[j + 1] = vetor[j];           //Posiciona os elementos para frente

            j = j - 1;                         //Faz o j andar para tr�s
        }
        //Colocando o atual no espa�o aberto
        vetor[j + 1] = atual;

        imprime_Vetor(vetor);       //Mostra a lista atualizada
    }
}

//PRINCIPAL
int main()
{
    setlocale(LC_ALL, "");

    //Vari�veis
    int vetor[TAM] = {10,9,8,7,6,5,4,3,2,1};

    //
    insertion_Sort(vetor);

    imprime_Vetor(vetor);

    return 0;
}
