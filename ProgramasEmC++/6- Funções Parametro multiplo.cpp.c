#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void mostraSoma(int primeiroValor, int segundoValor)
{
    printf("\nA soma entre %d e %d é %d", primeiroValor, segundoValor, primeiroValor + segundoValor);
}

int retornaSoma(int primeiroValor, int segundoValor)
{
    return primeiroValor + segundoValor;
}

int main()
{
    setlocale(LC_ALL, "");

    //Variáveis
    int a = 5, b = 7;

    //Função que mostra soma
    mostraSoma(a,b);

    //Exibe resultado da soma
    printf("\nA soma entre %d e %d é %d", a, b, retornaSoma(a, b));

     return 0;
}
