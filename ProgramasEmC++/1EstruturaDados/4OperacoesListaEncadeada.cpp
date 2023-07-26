#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string>
#include <new>
#include <iostream>

using namespace std;

struct pessoa
{
    string nome;
    int rg;
    struct pessoa *proximo;
};

//Função LIMPAR
void limpa_Tela()
{
    system("CLS");
}

//Função 1
int retornaTamanho(pessoa *ponteiroEncadeada)
{
    if(ponteiroEncadeada ->nome == "")
    {
        return 0;
    }

    int tamanho = 0;

    pessoa *p = ponteiroEncadeada;

    while(p != NULL)
    {
        p = p->proximo;

        tamanho++;
    }

    return tamanho;
}

//Função 2
void imprimeEncadeada(pessoa *ponteiroEncadeada)
{
    pessoa *p = ponteiroEncadeada;

    while(p != NULL)
    {
        cout << p ->nome << "," << p ->rg << "\n";

        p = p->proximo;
    }
}

//Função 3
void addComecoEncadeada(pessoa *&ponteiroEncadeada, string nome, int rg)
{
    pessoa *novoValor = new pessoa;
    novoValor ->nome = nome;
    novoValor ->rg = rg;
    novoValor ->proximo = ponteiroEncadeada;

    //Verifica se a lista está vazia
    if(ponteiroEncadeada ->nome == "")
    {
        novoValor ->proximo = NULL;
    }
    else
    {
        novoValor ->proximo = ponteiroEncadeada;
    }

    ponteiroEncadeada = novoValor;
}

//Função 4
void addFimEncadeada(pessoa *&ponteiroEncadeada, string nome, int rg)
{
    pessoa *novoValor = new pessoa;
    novoValor ->nome = nome;
    novoValor ->rg = rg;
    novoValor ->proximo = NULL;

    //Ponteiro cursor auxiliar
    pessoa *p = ponteiroEncadeada;

    while(p != NULL)
    {
        if(p ->proximo == NULL)
        {
            p ->proximo = novoValor;
            return;
        }

        p = p->proximo;
    }
}

//Função 5
void addPosicaoEncadeada(pessoa *&ponteiroEncadeada, string nome, int rg, int posicao)
{
    pessoa *novoValor = new pessoa;
    novoValor ->nome = nome;
    novoValor ->rg = rg;
    novoValor ->proximo = NULL;

    pessoa *p = ponteiroEncadeada;

    //Variável contatoda
    int i = 0;

    while(i <= posicao)
    {
        if(i == posicao -1)
        {
            //Auxiliar do valor
            pessoa *aux = new pessoa;

            //Armazena o proximo valor
            aux ->proximo = p ->proximo;

            p ->proximo = novoValor;

            //Faz o novo valor apontar para o proximo
            novoValor ->proximo = aux ->proximo;

            free(aux);
        }

        p = p ->proximo;
        i++;
    }
}

//Função 6
void removeInicioEncadeada(pessoa *&ponteiroEncadeada)
{
    if(ponteiroEncadeada ->proximo == NULL)
    {
        pessoa *novoValor = new pessoa;
        novoValor ->nome = "";
        novoValor ->rg = 0;
        novoValor ->proximo = NULL;

        ponteiroEncadeada = novoValor;
    }
    else
    {
        //Faz o ponteiro principal apontar para o próximo valor
        ponteiroEncadeada = ponteiroEncadeada ->proximo;
    }
}

//Função 7
void removeFimEncadeada(pessoa *&ponteiroEncadeada)
{
    //Auxiliares
    pessoa *p = new pessoa;
    pessoa *aux = new pessoa;
    p = ponteiroEncadeada;

    while(p ->proximo != NULL)
    {
        aux = p;
        p = p ->proximo;
    }

    //Muda o final da lista para o penultimo
    aux ->proximo = NULL;
}

//Função 8
void removePosicaoEncadeada(pessoa *&ponteiroEncadeada, int posicao)
{
    //Ponteiro auxiliar
    pessoa *p = ponteiroEncadeada;

    int i = 0;

    while(i <= posicao)
    {
        if(i == posicao -1)
        {
            //Auxiliar
            pessoa *aux = new pessoa;

            aux = p ->proximo;
            p ->proximo = aux ->proximo;

            free(aux);
        }

        p = p ->proximo;
        i++;
    }
}

//Função 9
string retornaNomeEncadeada(pessoa *&ponteiroEncadeada, int rg)
{
    string nome = "Não encontrado.";

    pessoa *p = ponteiroEncadeada;

    while(p != NULL)
    {
        //Quando encontra o RG
        if(p ->rg == rg)
        {
            nome = p ->nome;

            return nome;
        }

        p = p ->proximo;
    }

    return nome;
}

//PRINCIPAL
int main()
{
    setlocale(LC_ALL, "");

    //Variáveis
    int funcaoDesejada = 1;

    //EXEMPLO Cria o inicio da lista
    pessoa *ponteiroEncadeada = new pessoa;
    ponteiroEncadeada ->nome = "";
    ponteiroEncadeada ->rg = 0;
    ponteiroEncadeada ->proximo = NULL;

    /*pessoa *novoPrimeiroValor = new pessoa;
    novoPrimeiroValor ->nome = "Thais";
    novoPrimeiroValor ->rg = 123;
    novoPrimeiroValor ->proximo = NULL;

    ponteiroEncadeada = novoPrimeiroValor;

    pessoa *novoSegundoValor = new pessoa;
    novoSegundoValor ->nome = "Lucas";
    novoSegundoValor ->rg = 321;
    novoSegundoValor ->proximo = NULL;

    novoPrimeiroValor ->proximo = novoSegundoValor;*/

    //Menu
    while(funcaoDesejada < 9 && funcaoDesejada > 0)
    {
        cout << "Operações: \n";
        cout << "1- Inserção de um node no início da lista\n";
        cout << "2- Inserção de um node no fim da lista\n";
        cout << "3- Inserção de um node na posição N\n";
        cout << "4- Retirar um node no início da lista\n";
        cout << "5- Retirar um node no fim da lista\n";
        cout << "6- Retirar um node na posição N\n";
        cout << "7- Procurar um node com o campo RG\n";
        cout << "8- Imprimir a lista\n";
        cout << "9- Sair do sistema\n";
        cout << "Escolha um número e pressione ENTER\n";
        cout << "\n\nTamanho atual: " << retornaTamanho(ponteiroEncadeada) << "\n";

        if(retornaTamanho(ponteiroEncadeada) == 0)
        {
            cout << "\nLista Vazia.\n";
        }
        else
        {
            imprimeEncadeada(ponteiroEncadeada);
        }

        cin >> funcaoDesejada;

        limpa_Tela();

        //Variáveis novas
        string nome;
        int rg, posicao;

        switch(funcaoDesejada)
        {
            case 1:
                cout << "Função escolhida 1\n";
                cout << "Digite um nome: ";
                    cin >> nome;
                cout << "Digite um RG: ";
                    cin >> rg;

                addComecoEncadeada(ponteiroEncadeada, nome, rg);

                break;

            case 2:
                cout << "Função escolhida 2\n";
                cout << "Digite um nome: ";
                    cin >> nome;
                cout << "Digite um RG: ";
                    cin >> rg;

                if(retornaTamanho(ponteiroEncadeada) == 0)
                {
                    addComecoEncadeada(ponteiroEncadeada, nome, rg);
                }
                else
                {
                    addFimEncadeada(ponteiroEncadeada, nome, rg);
                }

                break;

            case 3:
                cout << "Função escolhida 3\n";
                cout << "Digite uma posição";
                    cin >> posicao;
                cout << "Digite um nome: ";
                    cin >> nome;
                cout << "Digite um RG: ";
                    cin >> rg;

                if(posicao == 0)
                {
                    addComecoEncadeada(ponteiroEncadeada, nome, rg);
                }
                else if(posicao == retornaTamanho(ponteiroEncadeada) -1)
                {
                    addFimEncadeada(ponteiroEncadeada, nome, rg);
                }
                else
                {
                    addPosicaoEncadeada(ponteiroEncadeada, nome, rg, posicao);
                }

                break;

            case 4:
                cout << "Função escolhida 4\n";

                removeInicioEncadeada(ponteiroEncadeada);

                break;

            case 5:
                cout << "Função escolhida 5\n";

                if(retornaTamanho(ponteiroEncadeada) == 1)
                {
                    removeInicioEncadeada(ponteiroEncadeada);
                }
                else
                {
                    removeFimEncadeada(ponteiroEncadeada);
                }

                break;

            case 6:
                cout << "Função escolhida 6\n";
                cout << "Digite a posição: \n";
                    cin >> posicao;

                if(posicao == 0)
                {
                    removeInicioEncadeada(ponteiroEncadeada);
                }
                else if(posicao == retornaTamanho(ponteiroEncadeada) -1)
                {
                    removeFimEncadeada(ponteiroEncadeada);
                }
                else
                {
                    removePosicaoEncadeada(ponteiroEncadeada, posicao);
                }

                break;

            case 7:
                cout << "Função escolhida 7\n";
                cout << "Digite um RG: \n";
                    cin >> rg;

                cout << "\nO nome do RG: " << rg << "é: " << retornaNomeEncadeada(ponteiroEncadeada, rg) << "\n";

                break;
        }
    }

    return 0;
}
