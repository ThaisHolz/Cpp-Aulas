#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string>
#include <iostream>

using namespace std;

void limpaTela()
{
    system("CLS");
}

int main()
{
    setlocale(LC_ALL, "");

    //Variáveis
    int a=10;

    //C
    printf("%d\n", a);

    char palavra[3];
    palavra[0] = 'G';
    palavra[1] = 'O';
    palavra[2] = 'L';

    printf("%c%c%c\n", palavra[0], palavra[1], palavra[2]);

    limpaTela();

    //C++
    cout << a;

    string outraPalavra = "\nGOL";
    cout << outraPalavra;


    return 0;
}
