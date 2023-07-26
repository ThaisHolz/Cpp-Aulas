#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string>
#include <new>
#include <iostream>
#define TAM 10

using namespace std;

//Função Imprimir
void imprime_Vetor(int vetor[TAM], int tamanho)
{
    int cont;

    cout << "\n";

    for(cont = 0; cont < TAM; cont++)
    {
        cout << vetor[cont] << " - ";
    }
}

//Função 1
void fila_Construtor(int *frente, int *tras)
{
    *frente = 0;
    *tras = -1;
}

//Função Confere Vazio
bool fila_Vazia(int frente, int tras)
{
    if(frente > tras)
    {
        return true;
    }
    else
    {
        return false;
    }
}

//Função Confere Cheia
bool fila_Cheia(int tras)
{
     if(tras == TAM -1)
     {
         return true;
     }
     else
    {
        return false;
    }
}

//Função 2
void fila_Enfileirar(int fila[TAM], int valor, int *tras)
{
    if(fila_Cheia(*tras))
    {
        cout << "\nFila cheia.";
    }
    else
    {
        *tras = *tras +1;
        fila[*tras] = valor;
    }
}

//Função 3
int fila_Tamanho(int tras, int frente)
{
    return (tras - frente) +1;
}

//Função 4
void fila_Desenfileirar(int fila[TAM], int *frente, int tras)
{
    if(fila_Vazia(*frente, tras))
    {
        cout << "\nImpossível desenfileirar uma lista vazia.";
    }
    else
    {
        cout << "\nO valor " << fila[*frente] << " foi removido";
        fila[*frente] = 0;
        *frente = *frente +1;
    }
}

//PRINCIPAL
int main()
{
    setlocale(LC_ALL, "");

    //Vetor (frente, a, b, c, d, e, tras)
    int fila[TAM] = {0,0,0,0,0,0,0,0,0,0};
    int frente, tras, valor;

    //
    fila_Construtor(&frente, &tras);

    fila_Enfileirar(fila, 5, &tras);
    fila_Enfileirar(fila, 10, &tras);
    fila_Enfileirar(fila, 15, &tras);
    fila_Enfileirar(fila, 20, &tras);

    fila_Desenfileirar(fila, &frente, tras);
    fila_Desenfileirar(fila, &frente, tras);
    fila_Desenfileirar(fila, &frente, tras);

    fila_Enfileirar(fila, 25, &tras);
    fila_Enfileirar(fila, 30, &tras);
    fila_Enfileirar(fila, 35, &tras);
    fila_Enfileirar(fila, 40, &tras);
    fila_Enfileirar(fila, 45, &tras);
    fila_Enfileirar(fila, 50, &tras);

    imprime_Vetor(fila, fila_Tamanho(tras, frente));

    return 0;
}
