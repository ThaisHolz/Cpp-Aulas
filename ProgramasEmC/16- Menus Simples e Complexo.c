#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main ()
{
    setlocale(LC_ALL, "");

    //Vari�veis
    int opcao;

    while(opcao < 1 || opcao > 3)
    {
        //Interface de menu
        printf("Escolha uma op��o:");
        printf("\n1- Op��o 1");
        printf("\n1- Op��o 2");
        printf("\n1- Op��o 3\n\n");

            scanf("%d", &opcao);

        //Resultado da op��o escolhida
        switch(opcao)
        {
            case 1:
                printf("\nOp��o 1 foi escolhida");
                break;
            case 2:
                printf("\nOp��o 2 foi escolhida");
                break;
            case 3:
                printf("\nOp��o 3 foi escolhida");
                break;
            default:
                printf("\nOp��o incorreta, tente novamente");
                break;
        }
    }

    system("pause");
}
