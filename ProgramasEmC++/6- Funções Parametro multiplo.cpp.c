#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void mostraSoma(int primeiroValor, int segundoValor)
{
    printf("\nA soma entre %d e %d � %d", primeiroValor, segundoValor, primeiroValor + segundoValor);
}

int retornaSoma(int primeiroValor, int segundoValor)
{
    return primeiroValor + segundoValor;
}

int main()
{
    setlocale(LC_ALL, "");

    //Vari�veis
    int a = 5, b = 7;

    //Fun��o que mostra soma
    mostraSoma(a,b);

    //Exibe resultado da soma
    printf("\nA soma entre %d e %d � %d", a, b, retornaSoma(a, b));

     return 0;
}
