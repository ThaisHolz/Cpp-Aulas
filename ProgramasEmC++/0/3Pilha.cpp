#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string>
#include <new>
#include <iostream>
#define TAM 10

using namespace std;

//Função I
void imprimeVetor(int vetor[TAM], int topo)
{
    int cont;

    cout << "\n";

    for(cont = 0; cont < TAM; cont++)
    {
        cout << vetor[cont] << " - ";
    }

    cout << "Topo:" << topo;
}

//Função II
bool pilhaVazia(int topo)
{
    if(topo == -1)
    {
        return true;
    }
    else
    {
        return false;
    }
}

//Função III
bool pilhaCheia(int topo)
{
    if(topo == TAM -1)
    {
        return true;
    }
    else
    {
        return false;
    }
}

//Função IV Adiciona um valor na pilha
void pilhaPush(int pilha[TAM], int valor, int *topo)
{
    //Caso não possa colocar mais valores
    if(pilhaCheia(*topo))
    {
        cout << "Pilha cheia.";
    }
    else
    {
        *topo = *topo +1;
        pilha[*topo] = valor;
    }
}

//Função V Desempilhar
void pilhaPop(int pilha[TAM], int *topo)
{
    if(pilhaVazia(*topo))
    {
        cout << "Pilha vazia.";
    }
    else
    {
        cout << "\nValor removido: " << pilha[*topo];
        pilha[*topo] = 0;
        *topo = *topo -1;
    }
}

//Função VI Cria e limpa uma pilha
void pilhaConstrutor(int pilha[TAM], int *topo)
{
    *topo = -1;

    int cont;       //Auxiliar contador

    for(cont = 0; cont < TAM; cont++)
    {
        pilha[cont] = 0;
    }
}

//Função VII indicar tamanho
int pilhaTamanho(int topo)
{
    return topo +1;
}

//Função VIII mostrar valor
int pilhaGet(int pilha[TAM], int *topo)
{
    if(pilhaVazia(*topo))
    {
        cout << "A pilha está vazia.";
        return 0;
    }
    else
    {
        return pilha[*topo];
    }
}

//PRINCIPAL
int main()
{
    setlocale(LC_ALL, "");

    //Variáveis
    int pilha[TAM], topo;

    pilhaConstrutor(pilha, &topo);           //Criar nova pilha

    imprimeVetor(pilha, topo);

    pilhaPush(pilha, 5, &topo);
        imprimeVetor(pilha, topo);

    cout << "\nÚltimo valor da pilha: " << pilhaGet(pilha, &topo);
    cout << "\nTamanho da pilha: " << pilhaTamanho(topo);

    pilhaPush(pilha, 10, &topo);
    pilhaPush(pilha, 15, &topo);
    pilhaPush(pilha, 20, &topo);
    pilhaPush(pilha, 25, &topo);
    pilhaPush(pilha, 30, &topo);
    pilhaPush(pilha, 35, &topo);
    pilhaPush(pilha, 40, &topo);
    pilhaPush(pilha, 45, &topo);
    pilhaPush(pilha, 50, &topo);
        imprimeVetor(pilha, topo);

    pilhaPop(pilha, &topo);
        imprimeVetor(pilha, topo);



    return 0;
}
