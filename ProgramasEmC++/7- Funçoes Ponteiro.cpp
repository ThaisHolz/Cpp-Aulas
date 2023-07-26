#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int retornaComMaisDez(int numero)
{
    return numero + 10;
}

void aumentaDez(int *numero)
{
    *numero = *numero + 10;
}

int main()
{
    setlocale(LC_ALL, "");

    //Variáveis
    int a = 5;

    printf("%d \n", a);

    //Aumenta 10
    a = retornaComMaisDez(a);

    printf("%d \n", a);

    //Função aumenta 10 diretamente
    aumentaDez(&a);

    printf("%d \n", a);


    return 0;
}
