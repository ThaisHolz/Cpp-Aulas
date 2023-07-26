#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string>
#include <new>
#include <iostream>
#include <time.h>

using namespace std;

//Cabeçalhos de funções
void menuInicial();

//Função LIMPAR
void limpa_Tela()
{
    system("CLS");
}

//Função 3
void iniciaTabuleiro(char tabuleiro[10][10], char mascara[10][10])
{
    int linha, coluna;

    //Organiza o tabuleiro com água
    for(linha = 0; linha < 10; linha++)
    {
        for(coluna = 0; coluna < 10; coluna++)
        {
            tabuleiro[linha][coluna] = 'A';
            mascara[linha][coluna] = '*';
        }
    }
}

//Função 7
void exibeMapa()
{
    int i;                 //Para colunas
    for(i = 0; i < 10; i++)
    {
        if(i == 0)
        {
            cout << "    ";
        }
        cout << i << "  ";
    }
    cout << "\n";
}

//Função 4
void exibeTabuleiro(char tabuleiro[10][10], char mascara[10][10], bool mostraGabarito)
{
    //Para cores
    char blue [] = {0x1b, '[', '3', '4', 'm', 0};
    char red [] = {0x1b, '[', '3', '1', 'm', 0};
    char white [] = {0x1b, '[', '3', '7', 'm', 0};

    //
    int linha, coluna;
    for(linha = 0; linha < 10; linha++)
    {
        cout << linha << "-";       //Exibe as linhas

        for(coluna = 0; coluna < 10; coluna++)
        {
            switch(mascara[linha][coluna])
            {
                case 'A':
                    cout << blue << "  " << mascara[linha][coluna] << white;
                    break;

                case 'P':
                    cout << red << "  " << mascara[linha][coluna] << white;
                    break;

                default:
                    cout << "  " << mascara[linha][coluna];
                    break;
            }
        }
        cout << "\n";
    }

    if(mostraGabarito == true)
    {
        //Gabarito
        for(linha = 0; linha < 10; linha++)
        {
            for(coluna = 0; coluna < 10; coluna++)
            {
                cout << "  " << tabuleiro[linha][coluna];
            }
            cout << "\n";
        }
    }
}

//Função 5
void posicionaBarcos(char tabuleiro[10][10])
{
    int i, quantidade = 10, posicionados = 0;

    while(posicionados < quantidade)
    {
        //Lugares aleatorios para barcos
        int linhaBarco = rand() %10, colunaBarco = rand() %10;

        if(tabuleiro[linhaBarco][colunaBarco] == 'A')
        {
            tabuleiro[linhaBarco][colunaBarco] = 'P';

            //Aumenta quantia de barcos
            posicionados++;
        }
    }
}

//Função 6
void verificaTiro(char tabuleiro[10][10], int linhaJogada, int colunaJogada, int *pontos, string *mensagens)
{
    //Pontuação a ser dada
    switch(tabuleiro[linhaJogada][colunaJogada])
    {
        case 'P':
            *pontos = *pontos + 10;
            *mensagens = "\nMuito bem, acertou um barquinho pequeno!";
            break;

        case 'A':
            *mensagens = "\nQue pena, você errou o tiro";
            break;
    }
}

//Função 2
void jogo(string nomeJogador)
{
    //Var
    char tabuleiro[10][10], mascara[10][10];
    int linha, coluna, linhaJogada, colunaJogada, pontos = 0;
    int estadoDeJogo = 1, tentativas = 0, maxTentativas = 5;
    int opcao;
    string mensagens = "Bem vindo ao jogo!";

    iniciaTabuleiro(tabuleiro, mascara);
    posicionaBarcos(tabuleiro);

    while(tentativas < maxTentativas)
    {
        limpa_Tela();
        exibeMapa();                            //Para localização de linhas e colunas
        exibeTabuleiro(tabuleiro, mascara, false);

        cout << "\nPontuação: " << pontos << ", Tentativas restantes: " << maxTentativas - tentativas;
        cout << "\n" << mensagens;

        //Verificação de dados
        linhaJogada = -1;
        colunaJogada = -1;

        while((linhaJogada < 0 || colunaJogada < 0) || (linhaJogada > 9 || colunaJogada > 9))
        {
            cout << "\nDigite uma linha: \n";
                cin >> linhaJogada;

            cout << "Digite uma coluna: \n";
                cin >> colunaJogada;
        }

        verificaTiro(tabuleiro, linhaJogada, colunaJogada, &pontos, &mensagens);

        //Revela a jogada
        mascara[linhaJogada][colunaJogada] = tabuleiro[linhaJogada][colunaJogada];

        tentativas++;
    }

    cout << "\nFim de jogo, escolha uma opção: ";
    cout << "\n1- Jogar novamente";
    cout << "\n2- Menu inicial";
    cout << "\n3- Sair";
        cin >> opcao;

    switch(opcao)
    {
        case 1:
            jogo(nomeJogador);
            break;

        case 2:
            menuInicial();
            break;
    }
}

//Fução 1
void menuInicial()
{
    //Variaveis
    int opcao = 0;
    string nomeJogador;

    //MENU
    cout << "Bem vindo ao jogo!\n";
    cout << "1 - Jogar\n";
    cout << "2 - Sobre\n";
    cout << "3 - Sair\n";
    cout << "Escolha uma opção e tecle ENTER: \n";
        cin >> opcao;

    switch(opcao)
    {
        while(opcao < 1 || opcao > 3)
        {
            limpa_Tela();

            case 1:
                cout << "Qual seu nome?\n";
                    cin >> nomeJogador;
                cout << "Jogo iniciado\n";
                jogo(nomeJogador);
                break;

            case 2:
                cout << "Informações do jogo\n";
                break;

            case 3:
                cout << "Até mais!\n";
                break;
        }
    }
}

//PRINCIPAL
int main()
{
    setlocale(LC_ALL, "");              //Para acentos
    srand((unsigned) time (NULL));      //Para aleatórios

    //
    menuInicial();

    return 0;
}
