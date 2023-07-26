#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

//Limpa a tela
void limpaTela()
{
    system("CLS");
}

struct palavra
{
    int ordem;
    char letra;
    char texto[255];
};

int main()
{
    setlocale(LC_ALL, "");

    //Criar uma palavra
    struct palavra primeiraPalavra;

    //Modificando campos
    primeiraPalavra.ordem = 10;
    primeiraPalavra.letra = 't';
    strcpy(primeiraPalavra.texto, "lucas");

    //Mostrando valores do struct
    printf("Ordem: %d", primeiraPalavra.ordem);
    printf("\nPrimeira letra: %c", primeiraPalavra.letra);
    printf("\nPalavra: %s", primeiraPalavra.texto);

    //Lista de structs
    struct palavra listaDePalavras[3];

    //Modificando campos
    listaDePalavras[0].ordem = 0;
    listaDePalavras[1].ordem = 1;
    listaDePalavras[2].ordem = 2;
    listaDePalavras[0].letra = 'L';
    listaDePalavras[1].letra = 'P';
    listaDePalavras[2].letra = 'S';
    strcpy(listaDePalavras[0].texto, "thais");
    strcpy(listaDePalavras[1].texto, "cristine");
    strcpy(listaDePalavras[2].texto, "coelho");

    //Percorrendo o vetor
    int i;

    for(i = 0; i < 3; i++)
    {
        printf("\nOrdem: %d", listaDePalavras[i].ordem);
        printf("\nPrimeira letra: %c", listaDePalavras[i].letra);
        printf("\nPalavra: %s", listaDePalavras[i].texto);
    }

    limpaTela();


    return 0;
}
