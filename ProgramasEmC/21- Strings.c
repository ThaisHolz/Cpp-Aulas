#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main ()
{
    setlocale(LC_ALL, "");

    //Vari�veis
    char palavra[10];
    // [x][x][x][x][ ][ ][ ][ ][ ][\0]

    //Instru��o
    printf("Digite uma palavra");

    //Limpar o Buffer
    setbuf(stdin, 0);

    //L� a string
    fgets(palavra, 10, stdin);

    //Limpa as casas n�o utilizadas
    palavra[strlen(palavra)-1] = '\0';

    //Imprime na tela
    printf("%s", palavra);

}
