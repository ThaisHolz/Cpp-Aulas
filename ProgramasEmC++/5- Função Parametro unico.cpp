#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void mostraSucessor(int numero)
{
    printf("\nO sucessor de %d é %d", numero, numero +1);
}

int retornaAntecessor(int numero)
{
    return numero -1;
}

int main()
{
    setlocale(LC_ALL, "");

    //Variáveis
    int a;

    //Instrução
    printf("Digite um valor:");
        scanf("%d", &a);

    //Chama função
    mostraSucessor(a);

    printf("\nO antecessor de %d é %d", a, retornaAntecessor(a));



    return 0;
}
