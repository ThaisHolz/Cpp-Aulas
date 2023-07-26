#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string>
#include <new>
#include <iostream>
#define TAM 10

using namespace std;

/*USADO PARA LISTAS BEM GRANDES*/

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
void shell_Sort(int vetor[TAM])
{
    int i, j, atual;
    int h = 1;

    //Pulo de análise entre valores
    while(h < TAM)
    {
        h = 3 * h + 1;
    }

    //Reduz a distância entre as análises
    while(h > 1)
    {
        h = h / 3;

        for(i = h; i < TAM; i++)
        {
            atual = vetor[i];
            j = i - h;

            while((j >= 0) && (atual < vetor[j]))
            {
                vetor[j + h] = vetor[j];
                j = j - h;
            }

            vetor[j + h] = atual;

            imprime_Vetor(vetor);
        }
    }
}

//PRINCIPAL
int main()
{
    setlocale(LC_ALL, "");

    //Variáveis
    int vetor[TAM] = {10,9,8,7,6,5,4,3,2,1};

    //
    shell_Sort(vetor);

    imprime_Vetor(vetor);



    return 0;
}
