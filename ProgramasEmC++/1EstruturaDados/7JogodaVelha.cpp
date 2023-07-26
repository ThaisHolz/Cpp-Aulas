#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string>
#include <new>
#include <iostream>
#include <time.h>

using namespace std;

//Cabeçalhos
void menuInicial();

//Função LIMPAR
void limpa_Tela()
{
    system("CLS");
}

//Função 1
void iniciaTabuleiro(char tabuleiro[3][3])
{
    int linha, coluna;

    //
    for(linha = 0; linha < 3; linha++)
    {
        for(coluna = 0; coluna < 3; coluna++)
        {
            tabuleiro[linha][coluna] = '-';
        }
        cout << "\n";
    }
}

//Função 2
void exibeTabuleiro(char tabuleiro[3][3])
{
    int linha, coluna;

    //
    cout << "\n";
    for(linha = 0; linha < 3; linha++)
    {
        for(coluna = 0; coluna < 3; coluna++)
        {
            cout << tabuleiro[linha][coluna] << " ";
        }
        cout << "\n";
    }
}

//Função 3 : 1 = X venceu / 2 = O venceu
int confereTabuleiro(char tabuleiro[3][3])
{
    int linha, coluna;

    //Confere se o jogo acabou - Linhas
        for (linha = 0; linha < 3; linha++)
        {
            if(tabuleiro[linha][0] == 'X' && tabuleiro[linha][0] == tabuleiro[linha][1] && tabuleiro[linha][1] == tabuleiro[linha][2])
            {
                return 1;
            }
            else if (tabuleiro[linha][0] == 'O' && tabuleiro[linha][0] == tabuleiro[linha][1] && tabuleiro[linha][1] == tabuleiro[linha][2])
            {
                return 2;
            }
        }

        //Confere se o jogo acabou - Colunas
        for (coluna = 0; coluna < 3; coluna++)
        {
            if(tabuleiro[0][coluna] == 'X' && tabuleiro[0][coluna] == tabuleiro[1][coluna] && tabuleiro[1][coluna] == tabuleiro[2][coluna])
            {
                return 1;
            }
            else if(tabuleiro[0][coluna] == 'O' && tabuleiro[0][coluna] == tabuleiro[1][coluna] && tabuleiro[1][coluna] == tabuleiro[2][coluna])
            {
                return 2;
            }
        }

        //Confere se o jogo acabou - Diagonais
        if(tabuleiro[0][0] != '-' && tabuleiro[0][0] == tabuleiro[1][1] && tabuleiro[1][1] == tabuleiro[2][2])
        {
            if(tabuleiro[0][0] == 'X')
            {
                return 1;
            }
            else
            {
                return 2;
            }
        }

        if(tabuleiro[0][2] != '-' && tabuleiro[0][2] == tabuleiro[1][1] && tabuleiro[1][1] == tabuleiro[2][0])
        {
            if(tabuleiro[0][2] == 'X')
            {
                return 1;
            }
            else
            {
                return 2;
            }
        }
    return 0;
}

//Função 4
exibeInstrucoes()
{
    cout << "\nMapa de posições:\n";
    cout << "7 8 9\n";
    cout << "4 5 6\n";
    cout << "1 2 3\n";
}

//JOGO
void jogo(string nomeJodagorUm, string nomeJogadorDois, int pontosJogadorUm, int pontosJogadorDois)
{
    //VAR
    string jogadorAtual;
    char tabuleiro[3][3];
    int linha, coluna, linhaJogada, colunaJogada, estadoDeJogo = 1, posicaoJogada;
    int turnoJogador = 1, rodada = 0, opcao;
    bool posicionouJogada = false;

    //
    iniciaTabuleiro(tabuleiro);

    while(rodada < 9 && estadoDeJogo == 1)
    {
        limpa_Tela();

        cout << "\nRodada: " << rodada << "\n";
        cout << "Pontuação: " << nomeJodagorUm << " " << pontosJogadorUm << "x" << pontosJogadorDois << " " << nomeJogadorDois;

        exibeTabuleiro(tabuleiro);

        //Indica qual numero do teclado corresponde com a posição de jogada
        exibeInstrucoes();

        if(turnoJogador == 1)
        {
            jogadorAtual = nomeJodagorUm;
        }
        else
        {
            jogadorAtual = nomeJogadorDois;
        }

        posicionouJogada = false;

        //Matriz de posições
        int posicoes[9][2] = {{2,0}, {2,1}, {2,2}, {1,0}, {1,1}, {1,2}, {0,0}, {0,1}, {0,2}};

        //
        while(posicionouJogada == false)
        {
            cout << jogadorAtual << "\nDigite uma posição conforme o mapa: ";
                cin >> posicaoJogada;

            //Linha e coluna de acordo com a matriz de posições
            linhaJogada = posicoes[posicaoJogada -1][0];
            colunaJogada = posicoes[posicaoJogada -1][1];

            if(tabuleiro[linhaJogada][colunaJogada] == '-')
            {
                posicionouJogada = true;

                //Verifica e altera a vez dos jogadores
                if(turnoJogador == 1)
                {
                    tabuleiro[linhaJogada][colunaJogada] = 'X';

                    turnoJogador = 2;
                }
                else
                {
                    tabuleiro[linhaJogada][colunaJogada] = 'O';

                    turnoJogador = 1;
                }
            }
        }

        //
        if(confereTabuleiro(tabuleiro) == 1)
        {
            cout << "O jogador X venceu!\n";
            pontosJogadorUm++;
            estadoDeJogo = 0;
        }
        else if(confereTabuleiro(tabuleiro) == 2)
        {
            cout << "O jogador O venceu!\n";
            pontosJogadorDois++;
            estadoDeJogo = 0;
        }

        rodada++;
    }

    exibeTabuleiro(tabuleiro);

    cout << "\nFim de jogo!\n";
    cout << "O que deseja fazer?\n";
    cout << "1- Continuar jogando\n";
    cout << "2- Menu inicial\n";
    cout << "3- Sair";
        cin >> opcao;

    if(opcao == 1)
    {
        jogo(nomeJodagorUm, nomeJogadorDois, pontosJogadorUm, pontosJogadorDois);
    }
    else if(opcao == 2)
    {
        menuInicial();
    }
}

//MENU INICIAL
void menuInicial()
{
    int opcao = 0;
    string nomeJodagorUm, nomeJodagorDois;

    while(opcao < 1 || opcao > 3)
    {
        limpa_Tela();

        cout << "Bem vindo ao jogo!\n";
        cout << "1- Jogar\n";
        cout << "2- Sobre\n";
        cout << "3- Sair\n";
        cout << "Escolha uma opçãoe tecle enter: ";
            cin >> opcao;

        switch(opcao)
        {
            case 1:
                cout << "\nJogo iniciado!\n";
                cout << "Nome do jogador 1: \n";
                    cin >> nomeJodagorUm;
                cout << "Nome do jogador 2: \n";
                    cin >> nomeJodagorDois;

                jogo(nomeJodagorUm, nomeJodagorDois, 0, 0);
                break;

            case 2:
                cout << "Criado por Thaís Coelho\n";
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
