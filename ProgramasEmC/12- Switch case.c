#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main ()
{
    setlocale(LC_ALL, "");

    //Vari�veis
    int opcao, valor1, valor2;

    //Leia dois valores
    printf("Digite o primeiro valor:");
        scanf("%d", &valor1);
    printf("Digite o segundo valor:");
        scanf("%d", &valor2);

    //Crie um menu de 4 op��es:soma, sub, mult e div
    printf("Ol�, escolha uma op��o:");
    printf("\n Op��o 1- Somar");
    printf("\n Op��o 2- Subtrair");
    printf("\n Op��o 3- Multiplicar");
    printf("\n Op��o 4- Dividir");
    printf("\n Op��o 5- Inv�lida");
    scanf("%d", &opcao);

    switch(opcao)
    {
        case 1:
            printf("\n Resultado da soma: %d", valor1 + valor2);
            break;
        case 2:
            printf("\n Resultado da subtra��o: %d", valor1 - valor2);
            break;
        case 3:
            printf("\n Resultado da multiplica��o: %d", valor1 * valor2);
            break;
        case 4:
            printf("\n Resultado da divis�o: %d", valor1 / valor2);
            break;
    }

    system("pause");
}
