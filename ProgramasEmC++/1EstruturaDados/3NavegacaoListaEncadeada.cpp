#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <new>


struct estrutura
{
    int valorNumerico;
    struct estrutura *proximo;
};


//PRINCIPAL
int main()
{
    setlocale(LC_ALL, "");

    //Inicio da lista
    estrutura *ponteiroEncadeada;

    //Cria um novo valor
    estrutura *novoPrimeiroValor = new estrutura;
    novoPrimeiroValor -> valorNumerico = 13;
    novoPrimeiroValor -> proximo = NULL;

    //Aponta para o primeiro valor
    ponteiroEncadeada = novoPrimeiroValor;

    //Cria um segundo valor
    estrutura *novoSegundoValor = new estrutura;
    novoSegundoValor -> valorNumerico = 20;
    novoSegundoValor -> proximo = NULL;

    //Junta os valores com encadeamento
    ponteiroEncadeada ->proximo = novoSegundoValor;

    //Imprime a lista encadeada
    while(ponteiroEncadeada != NULL)
    {
        printf("\nValor: %d", ponteiroEncadeada ->valorNumerico);

        ponteiroEncadeada = ponteiroEncadeada ->proximo;
    }


    return 0;
}
