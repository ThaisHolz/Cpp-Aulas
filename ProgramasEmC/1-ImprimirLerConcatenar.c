#include <stdio.h>
#include <stdlib.h>

void main(){

    //Definindo uma variável
    int a = 8, b;

    //Imprimindo a variável "a"
    printf("%d", a);

    //Concatenando
    printf("\nO valor da var a eh: %d", a);

    //Mudando o valor de "a"
    a = 20;

    //Concatenando
    printf("\nO valor da var a eh: %d", a);

    //Lendo valores
    scanf("%d", &b);

    //Concatenando
    printf("\nO valor da var b eh: %d", b);

    //Pular linhas
    printf("\n");

    //Imprimindo
    printf("Hey!");

    //Pausando
    system("pause");
}
