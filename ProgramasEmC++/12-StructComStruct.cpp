#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string>
#include <iostream>
#include <new>

using namespace std;

//Para C++
struct fruta
{
    string cor;
    string nome;
};

//Para principal
typedef struct data
{
    int dia, mes, ano;
}data;

struct aluno
{
    int id;
    data nascimento;
};


int main()
{
    setlocale(LC_ALL, "");

    //Criando um aluno
    struct aluno aluno1;

    //Modificando valores
    aluno1.id = 15;
    aluno1.nascimento.ano = 1994;
    aluno1.nascimento.mes = 3;
    aluno1.nascimento.dia = 8;

    //Imprimindo
    printf("Nascido em: %d / %d / %d \n", aluno1.nascimento.dia, aluno1.nascimento.mes, aluno1.nascimento.ano);



    //EM C++
    fruta *primeiraFruta = new fruta;

    primeiraFruta->cor = "Amarela";
    primeiraFruta->nome = "Banana";

    cout << "Fruta:" << primeiraFruta->nome << ", Cor:" << primeiraFruta->cor;

    //Modificando valores
    fruta *ponteiroListaDeFrutas = new fruta[2];

    ponteiroListaDeFrutas[0].cor = "Vermelho";
    ponteiroListaDeFrutas[0].nome = "Morango";
    ponteiroListaDeFrutas[1].cor = "Verde";
    ponteiroListaDeFrutas[1].nome = "Kiwi";

    int cont;

    for(cont = 0; cont < 2; cont++)
    {
        cout << "\nFruta:" << ponteiroListaDeFrutas[cont].nome << ", Cor:" << ponteiroListaDeFrutas[cont].cor;
    }


    return 0;
}
