#include <stdio.h>
#include <stdlib.h>

void main ()
{
    //Definindo variáveis
    int a = 5, opcao = 1;
    float b = 2.5;
    char c = 'T';

    //Condicioal simples
    if(a == 5)
        {printf("A variavel a = 5");}

    if(b ==2.5)
        {printf("\n A variavel b = 2.5");}

    if(c == 'T')
    {
        printf("\n A variavel c = T");
    }

    //Número par ou ímpar
    if(a % 2 == 1)
    {
        printf("\n A variavel a eh impar");
    }
    else
    {
        printf("\n  A variavel eh par");
    }

    //Condicional composta
    if(opcao == 1)
    {
        printf("\n A opcao = 1");
    }
    else if(opcao == 2)
    {
        printf("\n A opcao = 2");
    }
    else
    {
        printf("\n A opcao nao eh igual a 1 nem 2");
    }

    //Pausa o programa após execução
    system("pause");

}
