#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void main()
{

    //Definindo vari�veis
    int a = 6, b = 4;

    //Soma
    printf("\n A soma de a e b = %d", a + b);
    printf("\n A soma de %d e %d = %d", a, b, a + b);

    //Subtra��o
    printf("\n A subtracao de %d e %d = %d", a, b, a - b);

    //Divis�o
    printf("\n A divisao de %d e %d = %d", a, b, a / b);

    //Multiplica��o
    printf("\n A multiplicacao de %d e %d = %d", a, b, a * b);

    //Resto da divis�o
    printf("\n O resto da divisao entre %d e %d = %d", a, b, a % b);

    //Valor absoluto
    printf("\n O valor absoluto de -3 = %d", abs(-3));

    //Pausando ap�s executar
    system("pause");

}
