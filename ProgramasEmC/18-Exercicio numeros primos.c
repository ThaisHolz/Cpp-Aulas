#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main ()
{
    setlocale(LC_ALL, "");

    //Vari�veis
    int i, valor, aux = 0;

    //N�meros primos
    printf("Digite um valor para saber se � primo:");
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
        printf("\nO n�mero � primo!");
    }
    else
    {
        printf("\nO n�mero n�o � primo, pois ele tem %d divisores", aux);
    }

    system("pause");


}
