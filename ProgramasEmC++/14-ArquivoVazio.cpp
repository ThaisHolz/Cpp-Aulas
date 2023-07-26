#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <fstream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "");

    //Objeto do arquivo
    ofstream meuArquivo;

    meuArquivo.open("Texto.txt");

    //Esvazia o e fecha o arquivo
    meuArquivo << "";

    meuArquivo.close();



    return 0;
}
