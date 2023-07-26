#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <stdbool.h>

//Definindo que a função existe
int retornaDez();
float retornaQuebrado();
char retornaLetra();
bool retornaBooleano();

//Principal
int main()
{
    setlocale(LC_ALL, "");

    //Variáveis
    int a;
    float b;
    char letra;
    bool variavelBooleana;

    //Passando o retorno da função para a variável e imprimindo
    a = retornaDez();
        printf("\n%d", a);

    b = retornaQuebrado();
        printf("\n%.2f", b);

    letra = retornaLetra();
        printf("\nA letra é: %c", letra);

    variavelBooleana = retornaBooleano();
        //Se verdadeiro executa o 1º bloco se não o 2º
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

//Função retorna 10
int retornaDez()
{
   return 10;
}

//Função valor quebrado
float retornaQuebrado()
{
    return 2.5;
}

//Função caracter
char retornaLetra()
{
    return 'T';
}

//Função BOOL
bool retornaBooleano()
{
    return true;
}
