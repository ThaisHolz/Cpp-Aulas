#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main ()
{
    setlocale(LC_ALL, "");

    //Variáveis
    int opcao;

    while(opcao < 1 || opcao > 3)
    {
        //Interface de menu
        printf("Escolha uma opção:");
        printf("\n1- Opção 1");
        printf("\n1- Opção 2");
        printf("\n1- Opção 3\n\n");

            scanf("%d", &opcao);

        //Resultado da opção escolhida
        switch(opcao)
        {
            case 1:
                printf("\nOpção 1 foi escolhida");
                break;
            case 2:
                printf("\nOpção 2 foi escolhida");
                break;
            case 3:
                printf("\nOpção 3 foi escolhida");
                break;
            default:
                printf("\nOpção incorreta, tente novamente");
                break;
        }
    }

    system("pause");
}
