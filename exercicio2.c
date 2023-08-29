#include <stdio.h>
#include <windows.h>
#include <locale.h>
#include <stdlib.h>

//2. Faça um programa que leia o ano atual e o ano de nascimento de uma pessoa calcule a sua idade. Após verifique se elajá tem idade para ter CNH.

int main()
{
    float at, an, id;

    setlocale (LC_ALL, "PORTUGUESE");

    printf("\n Coloque o ano atual ex: 2023 \n");
    scanf("%f", &at);

    printf("\n Coloque seu ano de nascimento ex: 1997 \n");
    scanf("%f",&an);

    id= (at-an);

    printf("sua idade é .%2f \n", id);

    if (id >= 18)
    { 
        printf("\n você já pode fazer sua carteira ");
    }
   
   else if (id <18)
    {
        printf("\n Você não pode fazer sua carteira");
    }
}
