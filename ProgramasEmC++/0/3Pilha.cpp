#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string>
#include <new>
#include <iostream>
#define TAM 10

using namespace std;

//Fun��o I
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

//Fun��o II
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

//Fun��o III
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

//Fun��o IV Adiciona um valor na pilha
void pilhaPush(int pilha[TAM], int valor, int *topo)
{
    //Caso n�o possa colocar mais valores
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

//Fun��o V Desempilhar
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

//Fun��o VI Cria e limpa uma pilha
void pilhaConstrutor(int pilha[TAM], int *topo)
{
    *topo = -1;

    int cont;       //Auxiliar contador

    for(cont = 0; cont < TAM; cont++)
    {
        pilha[cont] = 0;
    }
}

//Fun��o VII indicar tamanho
int pilhaTamanho(int topo)
{
    return topo +1;
}

//Fun��o VIII mostrar valor
int pilhaGet(int pilha[TAM], int *topo)
{
    if(pilhaVazia(*topo))
    {
        cout << "A pilha est� vazia.";
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

    //Vari�veis
    int pilha[TAM], topo;

    pilhaConstrutor(pilha, &topo);           //Criar nova pilha

    imprimeVetor(pilha, topo);

    pilhaPush(pilha, 5, &topo);
        imprimeVetor(pilha, topo);

    cout << "\n�ltimo valor da pilha: " << pilhaGet(pilha, &topo);
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
