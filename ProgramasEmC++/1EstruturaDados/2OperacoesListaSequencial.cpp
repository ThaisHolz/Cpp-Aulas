#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string>
#include <new>
#include <iostream>
#define TAM 3

using namespace std;

//
struct pessoa
{
    string nome;
    int rg;
};

//Fun��o LIMPAR
void limpa_Tela()
{
    system("CLS");
}

//Fun��o IMPRIMIR SEQUENCIAL
void imprime_Sequencial(pessoa *ponteiroSequencial, int tamanhoLista)
{
    int cont;

    for(cont = 0; cont < tamanhoLista; cont++)
    {
        cout << cont << "-" << ponteiroSequencial[cont].nome << ", " << ponteiroSequencial[cont].rg << "\n";
    }
}

//Fun��o 1
void add_ComecoSequencial(pessoa *&ponteiroSequencial, int *tamanhoDaLista, string nome, int rg)
{
    //Se a lista for vazia
    if(*tamanhoDaLista == 0)
    {
        pessoa *novaListaSequencial = new pessoa[1];

        novaListaSequencial[0].nome = nome;
        novaListaSequencial[0].rg = rg;

        ponteiroSequencial = novaListaSequencial;
    }
    else
    {
        //Caso a lista j� tenha membros
        pessoa *copiaListaSequencial = new pessoa[*tamanhoDaLista +1];

        copiaListaSequencial[0].nome = nome;
        copiaListaSequencial[0].rg = rg;

        int cont;

        for(cont = 0; cont < *tamanhoDaLista; cont++)
        {
            copiaListaSequencial[cont +1].nome = ponteiroSequencial[cont].nome;
            copiaListaSequencial[cont +1].rg = ponteiroSequencial[cont].rg;
        }

        //Atualiza o ponteiro para a lista nova
        ponteiroSequencial = copiaListaSequencial;
    }

    *tamanhoDaLista = *tamanhoDaLista +1;
}

//Fun��o 2
void add_FimSequencial(pessoa *&ponteiroSequencial, int *tamanhoDaLista, string nome, int rg, int *posicaoNaLista)
{
    *posicaoNaLista = *tamanhoDaLista;

    //Cria uma lista maior
    pessoa *copiaListaSequencial = new pessoa[*tamanhoDaLista +1];

    copiaListaSequencial[*tamanhoDaLista].nome = nome;
    copiaListaSequencial[*tamanhoDaLista].rg = rg;

    int cont;

    for(cont = 0; cont < *tamanhoDaLista; cont++)
    {
        copiaListaSequencial[cont].nome = ponteiroSequencial[cont].nome;
        copiaListaSequencial[cont].rg = ponteiroSequencial[cont].rg;
    }
    //Atualiza o ponteiro e o tamanho da lista
    ponteiroSequencial = copiaListaSequencial;

    *tamanhoDaLista = *tamanhoDaLista +1;
}

//Fun��o 3
void add_PosicaoSequencial(pessoa *&ponteiroSequencial, int *tamanhoDaLista, string nome, int rg, int posicao)
{
    //Cria uma lista maior
    pessoa *copiaListaSequencial = new pessoa[*tamanhoDaLista +1];

    int cont;

    for(cont = 0; cont < posicao; cont++)
    {
        copiaListaSequencial[cont].nome = ponteiroSequencial[cont].nome;
        copiaListaSequencial[cont].rg = ponteiroSequencial[cont].rg;
    }
    //Add na posi��o correta
    copiaListaSequencial[posicao].nome = nome;
    copiaListaSequencial[posicao].rg = rg;

    //Coloca o resto dos valores antigos
    for(cont = posicao +1; cont < *tamanhoDaLista +1; cont++)
    {
        copiaListaSequencial[cont].nome = ponteiroSequencial[cont -1].nome;
        copiaListaSequencial[cont].rg = ponteiroSequencial[cont -1].rg;
    }
    //Atualiza o ponteiro e o tamanho da lista
    ponteiroSequencial = copiaListaSequencial;

    *tamanhoDaLista = *tamanhoDaLista +1;
}

//Fun��o 4
void remove_InicioSequencial(pessoa *&ponteiroSequencial, int *tamanhoDaLista)
{
    //Cria um vetor com uma posi��o a menos
    pessoa *copiaListaSequencial = new pessoa[*tamanhoDaLista -1];

    int cont;

    for(cont = 1; cont < *tamanhoDaLista; cont++)
    {
        copiaListaSequencial[cont -1].nome = ponteiroSequencial[cont].nome;
        copiaListaSequencial[cont -1].rg = ponteiroSequencial[cont].rg;
    }
     //Atualiza o ponteiro e o tamanho da lista
     ponteiroSequencial = copiaListaSequencial;

     *tamanhoDaLista = *tamanhoDaLista -1;
}

//Fun��o 5
void remove_FimSequencial(pessoa *&ponteiroSequencial, int *tamanhoDaLista, int *posicaoNaLista)
{
    *posicaoNaLista = *tamanhoDaLista -1;

    //Cria um vetor com uma posi��o a menos o ULTIMO
    pessoa *copiaListaSequencial = new pessoa[*tamanhoDaLista -1];

    int cont;

    for(cont = 0; cont < *tamanhoDaLista -1; cont++)
    {
        copiaListaSequencial[cont].nome = ponteiroSequencial[cont].nome;
        copiaListaSequencial[cont].rg = ponteiroSequencial[cont].rg;
    }

    //Atualiza o ponteiro e o tamanho da lista
    ponteiroSequencial = copiaListaSequencial;

    *tamanhoDaLista = *tamanhoDaLista -1;
}

//Fun��o 6
void remove_PosicaoSequencial(pessoa *&ponteiroSequencial, int *tamanhoDaLista, int posicao)
{
    //Cria um vetor com uma posi��o a menos
    pessoa *copiaListaSequencial = new pessoa[*tamanhoDaLista -1];

    int cont;

    for(cont = 0; cont < *tamanhoDaLista -1; cont++)
    {
        //Se estiver antes da posi��o passa normalmente
        if(cont < posicao)
        {
            copiaListaSequencial[cont].nome = ponteiroSequencial[cont].nome;
            copiaListaSequencial[cont].rg = ponteiroSequencial[cont].rg;
        }
        else
        {
            copiaListaSequencial[cont].nome = ponteiroSequencial[cont +1].nome;
            copiaListaSequencial[cont].rg = ponteiroSequencial[cont +1].rg;
        }
    }
    //Atualiza o ponteiro e o tamanho da lista
    ponteiroSequencial = copiaListaSequencial;

    *tamanhoDaLista = *tamanhoDaLista -1;
}

//Fun��o 7
string retorna_NomeSequencial(pessoa *&ponteiroSequencial, int *tamanhoDaLista, int rg, int *posicao)
{
    string nome = "N�o encontrado!";

    int cont;

    for(cont = 0; cont < *tamanhoDaLista; cont++)
    {
        if(ponteiroSequencial[cont].rg == rg)
        {
            nome = ponteiroSequencial[cont].nome;

            cout << "Encontrado na posi��o: " << cont << "\n";
        }
    }

    return nome;
}

//PRINCIPAL
int main()
{
    setlocale(LC_ALL, "");

    //VERI�VEIS
    int funcaoDesejada = 1;

    //Ponteiro para lista sequencial
    pessoa *ponteiroSequencial;

    //Tamanho da lista
    int tamanhoDaLista = 0;


    //MENU
    while(funcaoDesejada < 9 && funcaoDesejada > 0)
    {
        cout << "\nOpera��es: \n";
        cout << "1 - Inser��o de um node no in�cio da lista \n";
        cout << "2 - Inser��o de um node no fim da lista \n";
        cout << "3 - Inser��o de um node na posi��o N \n";
        cout << "4 - Retirar um node do in�cio da lista \n";
        cout << "5 - Retirar um node do fim da lista \n";
        cout << "6 - Retirar um node na posi��o N \n";
        cout << "7 - Procurar um node com o campo RG \n";
        cout << "8 - Imprimir a lista \n";
        cout << "9 - Sair do sistema \n";
        cout << "\nEscolha um n�mero e pressione ENTER \n";

        cin >> funcaoDesejada;
        limpa_Tela();

        //Vari�veis para as opera��es
        string nome;
        int rg, posicao, posicaoNaLista;

        //Chama a fun��o desejada
        switch(funcaoDesejada)
        {
            case 1:
                cout << "Fun��o escolhida 1 - Inser��o de um node no in�cio da lista \n";
                cout << "Digite um nome:";
                    cin >> nome;
                cout << "Digite um RG:";
                    cin >> rg;

                add_ComecoSequencial(ponteiroSequencial, &tamanhoDaLista, nome, rg);

                cout << "\nUsu�rio: " << nome << "RG: " << rg << "adicionado ao in�cio da lista.\n";

                break;

            case 2:
                cout << "Fun��o escolhida 2 - Inser��o de um node no fim da lista \n";
                cout << "\nDigite um nome:";
                    cin >> nome;
                cout << "\nDigite um RG:";
                    cin >> rg;

                //Se a lista for vazia usa a fun��o de criar no inicio
                if(tamanhoDaLista == 0)
                {
                    add_ComecoSequencial(ponteiroSequencial, &tamanhoDaLista, nome, rg);
                }
                else
                {
                    add_FimSequencial(ponteiroSequencial, &tamanhoDaLista, nome, rg, &posicaoNaLista);
                }

                cout << "\nUsu�rio: " << nome << "RG: " << rg << "adicionado ao fim da lista(" << posicaoNaLista << ")";

                break;

            case 3:
                cout << "Fun��o escolhida 3 - Inser��o de um node na posi��o N \n";
                cout << "\nDigite uma posi��o:";
                    cin >> posicao;
                cout << "\nDigite um nome:";
                    cin >> nome;
                cout << "\nDigite um RG:";
                    cin >> rg;

                //Se estiver add no come�o ou no fim
                if(posicao == 0)
                {
                    add_ComecoSequencial(ponteiroSequencial, &tamanhoDaLista, nome, rg);
                }
                else if(posicao == tamanhoDaLista +1)
                {
                    add_FimSequencial(ponteiroSequencial, &tamanhoDaLista, nome, rg, &posicaoNaLista);
                }
                else
                {
                    add_PosicaoSequencial(ponteiroSequencial, &tamanhoDaLista, nome, rg, posicao);
                }

                cout << "\nUsu�rio: " << nome << "RG: " << rg << "adicionado na posi��o: " << posicao;

                break;

            case 4:
                cout << "Fun��o escolhida 4 - Retirar um node do in�cio da lista \n";

                if(tamanhoDaLista == 0)
                {
                    cout << "\nLista Vazia!";
                }
                else
                {
                    remove_InicioSequencial(ponteiroSequencial, &tamanhoDaLista);
                }

                cout << "\nUsu�rio: " << nome << "RG: " << rg << "foi removido da lista";

                break;

            case 5:
                cout << "Fun��o escolhida 5 - Retirar um node do fim da lista \n";

                if(tamanhoDaLista == 0)
                {
                    cout << "\nLista Vazia!";
                }
                else
                {
                    remove_FimSequencial(ponteiroSequencial, &tamanhoDaLista, &posicaoNaLista);
                }

                cout << "\nUsu�rio: " << nome << "RG: " << rg << "removido na posi��o: " << posicaoNaLista;

                break;

            case 6:
                cout << "Fun��o escolhida 6 - Retirar um node na posi��o N \n";

                cout << "Digite a posi��o: ";
                    cin >> posicao;

                if(tamanhoDaLista == 0)
                {
                    cout << "\nLista Vazia!";
                }
                else
                {
                    if(posicao == 0)
                    {
                        remove_InicioSequencial(ponteiroSequencial, &tamanhoDaLista);
                    }
                    else if(posicao == tamanhoDaLista -1)
                    {
                        remove_FimSequencial(ponteiroSequencial, &tamanhoDaLista, &posicaoNaLista);
                    }
                    else
                    {
                        remove_PosicaoSequencial(ponteiroSequencial, &tamanhoDaLista, posicao);
                    }
                }
                cout << "\nUsu�rio: " << nome << "RG: " << rg << "removido na posi��o: " << posicao;

                break;

            case 7:
                cout << "Fun��o escolhida 7 - Procurar um node com o campo RG \n";

                cout << "Digite um RG";
                    cin >> rg;

                cout << "Nome:\n" << retorna_NomeSequencial(ponteiroSequencial, &tamanhoDaLista, rg, &posicao);

                break;

            case 8:
                cout << "Fun��o escolhida 8 - Imprimir a lista\n";

                imprime_Sequencial(ponteiroSequencial, tamanhoDaLista);

                break;
        }
    }


    return 0;
}

