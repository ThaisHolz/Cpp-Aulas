#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main ()
{
    setlocale(LC_ALL, "");

    //Variáveis
    int i, valor, aux = 0;

    //Números primos
    printf("Digite um valor para saber se é primo:");
        scanf("%d", &valor);

    for(i = 1; i <= valor; i++)
    {
        if(valor % i == 0)
        {
            aux++;
        }
        printf("%d / %d tem o resto = %d \n", valor, i, valor%i);
    }

    if(aux == 2)
    {
        printf("\nO número é primo!");
    }
    else
    {
        printf("\nO número não é primo, pois ele tem %d divisores", aux);
    }

    system("pause");


}
