#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string>
#include <iostream>

using namespace std;

int main ()
{
    setlocale(LC_ALL, "");

    //Definindo string
    string palavra;

    //Imprimindo na tela
    cout << "Digite uma palavra:";

    //Lendo string
    cin >> palavra;

    //Imprimindo vari�vel
    cout << "\nA palavra �:" << palavra;

    system("pause");

return 0;
}
