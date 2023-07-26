#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <fstream>
#include <string>
#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "");

    //CRIA objeto de arquivo
    ofstream arquivoDeSaida;

    arquivoDeSaida.open("Texto.txt", std::ios_base::app);
    arquivoDeSaida << "Lucas"
    arquivoDeSaida.close();

    //LENDO ARQUIVOS
    int c;

    FILE *file;
    file = fopen("Texto.txt", "r");

    if(file)
    {
        while((c = getc(file)) != EOF)
        {
            printf("%c", c);
        }
    }

    fclose(file);

    //EM C++
    ifstream imput("Texto.txt");
    string textoLido;

    for(string line; getline(imput, line);)
    {
        textoLido += line;
    }

    cout << textoLido;


    return 0;
}
