#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()

{
    char nome[5][70], endereco[5][70];
    char doc[5][15];
    int i;


    for ( i = 0; i < 5; i++)
    {
        printf("\n Insira o seu nome completo: \n");
        fflush(stdin);
        gets(nome[i]);

        printf("\n Insira o seu endereco: \n");
        fflush(stdin);
        gets(endereco[i]);

        printf("\n Insira o seu CPF ou RG: \n");
        scanf("%s", &doc[i]);
        fflush(stdin);

    }
        for ( i = 0; i < 5; i++)
        {
            printf("\n Nome: %s \n", nome[i]);
            printf("\n Endereco: %s \n", endereco[i]);
            printf("\n Documento: %s \n", doc[i]);
        }
        

}