#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <new>
#include <iostream>
#include <string>

using namespace std;

int main()
{
    setlocale(LC_ALL, "");

    //Variaveis
    int linhas = 3, coluna = 3, i, j;
    int **matriz;

    //Lendo o tamanho pelo usuário
    printf("Digite o número de linhas:");
        scanf("%d", &linhas);
    printf("\nDigite o número de colunas");
        scanf("%d", &coluna);

    //Alocando as linhas
    matriz = (int **) malloc(linhas * sizeof(int *));

    //Alocando as colunas
    for(i = 0; i < linhas; i++)
    {
        matriz[i] = (int *) malloc(coluna * sizeof(int));
    }

    //Exibindo a matriz
    for(i = 0; i < linhas; i++)
    {
        for(j = 0; j < coluna; j++)
        {
            matriz[i][j] = i;
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    //Libera a memória
    free(matriz);


    /*EM C++
    matriz = (int **) new int[linhas];

    for(i = 0; i < linhas; i++)
    {
        matriz[i] = (int *) new int[coluna];
    }

    */


    return 0;
}
