#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string>
#include <new>
#include <iostream>
#include <time.h>

using namespace std;

//Fun��o LIMPAR
void limpa_Tela()
{
    system("CLS");
}

//Fun��o 3
string retornaPalavraAleatoria()
{
    string palavra[3] = {"barcelona", "tempestade", "cristo"};

    //N�meros gerados que sejam [0,1,2]
    int indiceAleatorio = rand() %3;

    return palavra[indiceAleatorio];
}

//Fun��o 4
string retornaPalavraMascara(string palavra, int tamanhoPalavra)
{
    int i = 0;

    string palavraMascara;

    while(i < tamanhoPalavra)
    {
        palavraMascara += ".";
        i++;
    }

    return palavraMascara;
}

//Fun��o 5
void exibeStatus(string palavraMascara, int tamanhoPalavra, int tentativasRestantes, string letrasDigitadas, string mensagem)
{
    //cout << "A palavra �: " << palavra << "(Tamanho:" << tamanhoPalavra << ")";
    cout << mensagem;
    cout << "\nPalavra: " << palavraMascara << "(Tamanho:" << tamanhoPalavra << ")";
    cout << "\nTentativas restantes: " << tentativasRestantes;

    //Exibe letras j� digitadas
    int i;
    cout << "\nLetras j� digitadas: ";

    for(i =0; i < letrasDigitadas.size(); i++)
    {
        cout << letrasDigitadas[i] << ", ";
    }
}

//Fun��o 2
int jogar(int numeroJogadores)
{
    string palavra;

    //Conferir numero de jogadores
    if(numeroJogadores == 1)
    {
        //Palavra a ser adivinhada
         palavra = retornaPalavraAleatoria();
    }
    else
    {
        cout << "\nDigite uma palavra: ";
            cin >> palavra;
    }

    //Tamanho da palavra
    int tamanhoPalavra = palavra.size();

    //Palavra mascarada
    string palavraMascara = retornaPalavraMascara(palavra, tamanhoPalavra);

    //Vari�veis
    int tentativa = 0, maximoTentativa = 10, i = 0, opcao;
    char letra;
    string letrasDigitadas, mensagem, palavraArriscada;
    bool jaDigitouLetra = false, acertouLetra = false;

    //
    while(palavra != palavraMascara && maximoTentativa - tentativa > 0)
    {
        limpa_Tela();

        exibeStatus(palavraMascara, tamanhoPalavra, maximoTentativa - tentativa, letrasDigitadas, mensagem);

        cout << "\n\nDigite uma letra (ou digite 1 para arriscar a palavra): ";
            cin >> letra;

        //Arriscando a palavra inteira
        if(letra == '1')
        {
            cin >> palavraArriscada;

            if(palavraArriscada == palavra)
            {
                palavraMascara = palavraArriscada;
            }
            else
            {
                tentativa = maximoTentativa;
            }
        }

        //Avisa se a letra j� foi digitada
        for(i = 0; i < tentativa; i++)
        {
            if(letrasDigitadas[i] == letra)
            {
                mensagem = "Essa letra j� foi digitada amiga, tenta de novo.\n";
                jaDigitouLetra = true;
            }
        }

        if(jaDigitouLetra == false)
        {
            letrasDigitadas += tolower(letra);

            //Percorre e mostra se a letra for correta
            for(i = 0; i < tamanhoPalavra; i++)
            {
                if(palavra[i] == tolower(letra))    //Tolower para igualar letras maiuscula e minuscula
                {
                    palavraMascara[i] = palavra[i];

                    acertouLetra = true;
                }
            }

            if(acertouLetra == false)
            {
                mensagem = "Ahh n�o, voc� errou!\n";
            }
            else
            {
                mensagem = "Aeee! Acertou uma.\n";
            }

            tentativa++;
        }

        //Reiniciando
        jaDigitouLetra = false;
        acertouLetra = false;
    }

    if(palavra == palavraMascara)
    {
        limpa_Tela();
        cout << "Aeee! Voc� acertou!\n\n";
        cout << "\nQuer jogar mais uma?";
        cout << "\n1 - Sim";
        cout << "\n2 - N�o";
            cin >> opcao;

        return opcao;
    }
    else
    {
        limpa_Tela();
        cout << "Poxa!! Acabaram as tentativas!\n\n";
        cout << "\nQuer jogar mais uma?";
        cout << "\n1 - Sim";
        cout << "\n2 - N�o";
            cin >> opcao;
        return opcao;
    }
}

//Fun��o 1
void menuInicial()
{
    int opcao = 0;

    //MENU
    while(opcao < 1 || opcao > 3)
    {
        limpa_Tela();
        cout << "Bem vindo ao jogo Carolina!\n";
        cout << "1 - Jogar sozinha\n";
        cout << "2 - Jogar em dupla\n";
        cout << "3 - Sobre\n";
        cout << "4 - Sair\n";
        cout << "Escolha uma op��o e tecle ENTER:\n";
            cin >> opcao;

        switch(opcao)
        {
        case 1:
            cout << "Jogo iniciado!\n";

           if( jogar(1) == 1)
           {
               menuInicial();
           }

            break;

        case 2:
            cout << "Jogar em dupla\n";

            if( jogar(2) == 1)
           {
               menuInicial();
           }

            break;

        case 3:
            cout << "Informa��es do jogo.";
            limpa_Tela();

            cout << "Jogo desenvolvido pela sua amiga gata Tha�s C. (2023)\n";
            cout << "1 - Voltar\n";
            cout << "2 - Sair\n";
                cin >> opcao;

            if(opcao == 1)
            {
                menuInicial();
            }

            break;

        case 4:
            cout << "At� mais!!";

            break;
        }
    }
}

//PRINCIPAL
int main()
{
    srand((unsigned)time(NULL));   //Para n�meros aleat�rios
    setlocale(LC_ALL, "");         //Para acentos

    //
    menuInicial();


    return 0;
}
