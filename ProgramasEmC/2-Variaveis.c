#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void main(){

    //Definindo variáveis
    int a;
    float b;
    char c;
    bool d;

    //Passando valores
    a = 5;
    b = 2.5;
    c = 'T';
    d = false; //True = 1 e False = 0

    //Escrever na tela
    printf("\n O valor de a = %d",a);
    printf("\n O valor de b = %.2f",b);
    printf("\n O valor de c = %c",c);
    printf("\n O valor de d = %d",d);

    //Lendo valores e escrevendo na tela
    scanf("%d", &a);
    scanf("%f", &b);
    scanf(" %c", &c);
    scanf("%d", &d);

    printf("\n O valor de a = %d",a);
    printf("\n O valor de b = %.2f",b);
    printf("\n O valor de c = %c",c);
    printf("\n O valor de d = %d",d);

    //Pausando
    system("pause");

}
