#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <iostream>
#include <locale.h>

using namespace std;

int main ()
{
    setlocale(LC_ALL, "");

    //Criando matriz
    int matriz[2][2], i, j;

    //Passando valores
    matriz[0][0] = 1;
    matriz[0][1] = 2;
    matriz[1][0] = 3;
    matriz[1][1] = 4;

    //Imprimindo na tela
    for(i = 0; i < 2; i++)
    {
        for(j = 0; j < 2; j++)
        {
            //cout << "\ni =" << i << ", j =" << j;
            cout << matriz[i][j] << " ";
        }
        cout << "\n";
    }

    //Lendo valores para matriz
    for(i = 0; i < 2; i++)
    {
        for(j = 0; j < 2; j++)
        {
            //scanf("%d", &matriz[i][j]);
            cin >> matriz[i][j];
        }
    }

    //Imprimindo na tela
    for(i = 0; i < 2; i++)
    {
        for(j = 0; j < 2; j++)
        {
            //cout << "\ni =" << i << ", j =" << j;
            cout << matriz[i][j] << " ";
        }
        cout << "\n";
    }

    system("pause");
}
