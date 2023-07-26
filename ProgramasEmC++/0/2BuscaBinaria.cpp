#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string>
#include <new>
#include <iostream>
#define TAM 10

using namespace std;

//Função I
void imprimeVetor(int vetor[TAM])
{
    int cont;

    for(cont = 0; cont < TAM; cont++)
    {
        cout << vetor[cont] << " - ";
    }
}

//Função II
int buscaSimples(int vetor[TAM], int valorProcurado, int *posicaoEncontrada)
{
    int cont;
    bool valorEncontrado;

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

//Função III
int buscaBinaria(int vetor[TAM], int valorProcurado, int *posicaoEncontrada)
{
    int esquerda = 0;           //Limite da esquerda
    int direita = TAM -1;       //Limite da direita
    int meio;                   //Meio onde fica o cursor

    while(esquerda <= direita)
    {
        meio = (esquerda + direita)/2;

        //Quando o valor é encontrado
        if(valorProcurado == vetor[meio])
        {
            *posicaoEncontrada = meio;
            return 1;
        }

        //Ajustando limites laterais
        if(vetor[meio] < valorProcurado)
        {
            esquerda = meio +1;
        }
        else
        {
            direita = meio -1;
        }
    }
    return -1;
}


//PRINCIPAL
int main()
{
    setlocale(LC_ALL, "");

    //Variáveis
    int vetor[TAM] = {10,20,30,40,50,60,70,80,90};
    int valorProcurado, posicao, posicaoEncontrada, cont;

    //
    imprimeVetor(vetor);

    printf("\nQual número deseja encontrar?");
        scanf("%d", &valorProcurado);

    if(buscaBinaria(vetor, valorProcurado, &posicaoEncontrada) == 1)
    {
        cout << "\nO valor foi encontrado:" << posicaoEncontrada;
    }
    else
    {
        cout << "\nValor não encontrado.";
    }


    return 0;
}
