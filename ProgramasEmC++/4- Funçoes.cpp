#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <stdbool.h>

//Definindo que a fun��o existe
int retornaDez();
float retornaQuebrado();
char retornaLetra();
bool retornaBooleano();

//Principal
int main()
{
    setlocale(LC_ALL, "");

    //Vari�veis
    int a;
    float b;
    char letra;
    bool variavelBooleana;

    //Passando o retorno da fun��o para a vari�vel e imprimindo
    a = retornaDez();
        printf("\n%d", a);

    b = retornaQuebrado();
        printf("\n%.2f", b);

    letra = retornaLetra();
        printf("\nA letra �: %c", letra);

    variavelBooleana = retornaBooleano();
        //Se verdadeiro executa o 1� bloco se n�o o 2�
        if (variavelBooleana)
        {
            printf("\nVerdadeiro!");
        }
        else
        {
            printf("\nFalso!");
        }


    return 0;
}

//Fun��o retorna 10
int retornaDez()
{
   return 10;
}

//Fun��o valor quebrado
float retornaQuebrado()
{
    return 2.5;
}

//Fun��o caracter
char retornaLetra()
{
    return 'T';
}

//Fun��o BOOL
bool retornaBooleano()
{
    return true;
}
