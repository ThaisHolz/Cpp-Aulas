#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main ()
{
    setlocale(LC_ALL, "");

    //Matriz 2x2 lendo valores do usuario e depois inverta as linhas
    int matriz[2][2], aux1, aux2, i, j;

    for(i = 0; i < 2; i++)
    {
        for(j = 0; j < 2; j++)
        {
            printf("Digite um valor:");
            scanf("%d", &matriz[i][j]);
        }
    }

    aux1 = matriz[0][0];
    aux2 = matriz[0][1];

    //Invertendo os valores
    matriz[0][0] = matriz[1][0];
    matriz[0][1] = matriz[1][1];
    matriz[1][0] = aux1;
    matriz[1][1] = aux2;

   //Imprimindo nova matriz
    for(i = 0; i < 2; i++)
    {
        for(j = 0; j < 2; j++)
        {
            printf("%d", matriz[i][j]);
        }
        printf("\n");
    }

}
