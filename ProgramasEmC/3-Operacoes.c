#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void main()
{

    //Definindo variáveis
    int a = 6, b = 4;

    //Soma
    printf("\n A soma de a e b = %d", a + b);
    printf("\n A soma de %d e %d = %d", a, b, a + b);

    //Subtração
    printf("\n A subtracao de %d e %d = %d", a, b, a - b);

    //Divisão
    printf("\n A divisao de %d e %d = %d", a, b, a / b);

    //Multiplicação
    printf("\n A multiplicacao de %d e %d = %d", a, b, a * b);

    //Resto da divisão
    printf("\n O resto da divisao entre %d e %d = %d", a, b, a % b);

    //Valor absoluto
    printf("\n O valor absoluto de -3 = %d", abs(-3));

    //Pausando após executar
    system("pause");

}
