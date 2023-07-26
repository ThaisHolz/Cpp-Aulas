#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main ()
{
    setlocale(LC_ALL, "");

    //Variáveis
    int opcao, valor1, valor2;

    //Leia dois valores
    printf("Digite o primeiro valor:");
        scanf("%d", &valor1);
    printf("Digite o segundo valor:");
        scanf("%d", &valor2);

    //Crie um menu de 4 opções:soma, sub, mult e div
    printf("Olá, escolha uma opção:");
    printf("\n Opção 1- Somar");
    printf("\n Opção 2- Subtrair");
    printf("\n Opção 3- Multiplicar");
    printf("\n Opção 4- Dividir");
    printf("\n Opção 5- Inválida");
    scanf("%d", &opcao);

    switch(opcao)
    {
        case 1:
            printf("\n Resultado da soma: %d", valor1 + valor2);
            break;
        case 2:
            printf("\n Resultado da subtração: %d", valor1 - valor2);
            break;
        case 3:
            printf("\n Resultado da multiplicação: %d", valor1 * valor2);
            break;
        case 4:
            printf("\n Resultado da divisão: %d", valor1 / valor2);
            break;
    }

    system("pause");
}
