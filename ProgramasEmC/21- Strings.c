#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main ()
{
    setlocale(LC_ALL, "");

    //Variáveis
    char palavra[10];
    // [x][x][x][x][ ][ ][ ][ ][ ][\0]

    //Instrução
    printf("Digite uma palavra");

    //Limpar o Buffer
    setbuf(stdin, 0);

    //Lê a string
    fgets(palavra, 10, stdin);

    //Limpa as casas não utilizadas
    palavra[strlen(palavra)-1] = '\0';

    //Imprime na tela
    printf("%s", palavra);

}
