#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string>
#include <new>
#include <iostream>
#define TAM 10

using namespace std;

/*USADO QUANDO NÃO SE SABE COMO ESTÁ A LISTA,
  MUITO RÁPIDO */

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
void quick_Sort(int vetor[TAM], int inicio, int fim)
{
    int pivo, esq, dir, meio, aux;

    //Limites
    esq = inicio;
    dir = fim;
    //Ajustando meio
    meio = (int) ((esq + dir) /2);
    pivo = vetor[meio];

    while(dir > esq)
    {
        while(vetor[esq] < pivo)
        {
            esq = esq +1;
        }

        while(vetor[dir] > pivo)
        {
            dir = dir -1;
        }

        if(esq <= dir)
        {
            //Realiza a troca
            aux = vetor[esq];
            vetor[esq] = vetor[dir];
            vetor[dir] = aux;

            //Limites alinhados para o centro
            esq = esq +1;
            dir = dir -1;
        }

    imprime_Vetor(vetor);

    }
    //Recursão para continuar ordenando
    if(inicio < dir)
    {
        quick_Sort(vetor, inicio, dir);
    }

    if(esq < fim)
    {
        quick_Sort(vetor, esq, fim);
    }
}

//PRINCIPAL
int main()
{
    setlocale(LC_ALL, "");

    //Variáveis
    int vetor[TAM] = {10,9,8,7,6,5,4,3,2,1};

    //
    quick_Sort(vetor, 0, TAM);

    imprime_Vetor(vetor);


    return 0;
}
