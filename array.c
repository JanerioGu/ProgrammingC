#include <stdio.h>
#include <stdlib.h>

//Faça um programa que entre a resposta do usuario e a compare com o gabarito. Logo em seguida, conte quantos acertos o usuario fez.

int main ()

{
    char n[]= {'A','B', 'C', 'D'};
    int i;
    char resp[4];
    float qtd;

    for ( i = 0; i < 4; i++)
    {
        printf("\n Qual a resposta da questao %i? \n", i+1);
        scanf("%s", &resp[i]);


       {
            if (resp[i] == n[i])
            {
                qtd++;
            }
            
       }
       
    }

        printf("A quantidade de acertos foi %.2f", qtd);
    

}
