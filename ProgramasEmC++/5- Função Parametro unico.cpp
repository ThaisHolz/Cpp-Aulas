#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void mostraSucessor(int numero)
{
    printf("\nO sucessor de %d � %d", numero, numero +1);
}

int retornaAntecessor(int numero)
{
    return numero -1;
}

int main()
{
    setlocale(LC_ALL, "");

    //Vari�veis
    int a;

    //Instru��o
    printf("Digite um valor:");
        scanf("%d", &a);

    //Chama fun��o
    mostraSucessor(a);

    printf("\nO antecessor de %d � %d", a, retornaAntecessor(a));



    return 0;
}
