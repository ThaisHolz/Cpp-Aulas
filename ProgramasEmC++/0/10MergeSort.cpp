#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string>
#include <new>
#include <iostream>
#define TAM 10

using namespace std;

/*USADO PARA */

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

//Função 0: Junta os 2 subarrays(vetores) criados
void merge(int vetor[TAM], int indiceEsq, int meio, int indiceDir)
{
    int i, j, k;
    int n1 = meio - indiceEsq + 1;
    int n2 = indiceDir - meio;

    //Arrays temporarios
    int vetorEsq[n1], vetorDir[n2];

    //Passa os elementos do vetor principal para o 1º auxiliar
    for(i = 0; i < n1; i++)
    {
        vetorEsq[i] = vetor[indiceEsq + i];
    }

    //Passa os elementos do vetor principal para o 2º auxiliar
    for(j = 0; j < n2; j++)
    {
        vetorDir[j] = vetor[meio + 1 + j];
    }

    //Reseta variaveis
    i = 0;
    j = 0;
    k = indiceEsq;

    while(i < n1 && j < n2)
    {
        //Caso valor da esq seja menor
        if(vetorEsq[i] <= vetorDir[j])
        {
            vetor[k] = vetorEsq[i];

            i++;
        }
        else
        {
            vetor[k] = vetorDir[j];

            j++;
        }
        //Aumenta indice de posicionamento do vetor
        k++;
    }
    //Se faltar elementos do array ESQ, passa para o principal
    while(i < n1)
    {
        vetor[k] = vetorEsq[i];
        i++;
        k++;
    }

    //Se faltar elementos do array DIR, passa para o principal
    while(j < n2)
    {
        vetor[k] = vetorDir[j];
        j++;
        k++;
    }
}

//Função 1
void merge_Sort(int vetor[TAM], int indiceEsq, int indiceDir)
{
    if(indiceEsq < indiceDir)
    {
        //Encontra o meio
        int meio = indiceEsq + (indiceDir - indiceEsq)/2;

        //Metade para trás
        merge_Sort(vetor, indiceEsq, meio);

        //Metade para frente
        merge_Sort(vetor, meio + 1, indiceDir);

        //Visualizando o processo
        imprime_Vetor(vetor);

        //Une os dois subarrays criados
        merge(vetor, indiceEsq, meio, indiceDir);
    }
}


//PRINCIPAL
int main()
{
    setlocale(LC_ALL, "");

    //Variáveis
    int vetor[TAM] = {10,9,8,7,6,5,4,3,2,1};

    //
    imprime_Vetor(vetor);

    merge_Sort(vetor, 0, TAM - 1);

    imprime_Vetor(vetor);


    return 0;
}
