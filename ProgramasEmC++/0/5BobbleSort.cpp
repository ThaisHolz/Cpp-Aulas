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

//Função Bobble
void bubble_Sort(int vetor[TAM])
{
    int x, y, aux;

    //Valor da ESQ sendo analizado
    for(x = 0; x < TAM; x++)
    {
        //Valor da DIR sendo analizado
        for(y = x+1; y < TAM; y++)
        {
            imprime_Vetor(vetor);

            //Confere se precisa fazer a troca
            if(vetor[x] > vetor[y])
            {
                aux = vetor[x];
                vetor[x] = vetor[y];
                vetor[y] = aux;
            }
        }
    }
}

//PRINCIPAL
int main()
{
    setlocale(LC_ALL, "");

    //Variáveis
    int vetor[TAM] = {10,9,8,7,6,5,4,3,2,1};

    bubble_Sort(vetor);

    imprime_Vetor(vetor);

    return 0;
}
