#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main ()
{
    //Para acentos
    setlocale(LC_ALL, "");

    //Definindo vari�veis
    char letra = 'x';

    //Condicional simples
    if(letra == 'x')
    {
        printf("\n A letra � x");
    }

    //Tabela ASCII.cl
    printf("\n O c�digo da letra = %d", letra);

    if(letra == 120)
    {
        printf("\n A letra � x");
    }

}
