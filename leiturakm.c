#include <stdio.h>
#include <locale.h>
#include <ctype.h>
#include <stdlib.h>

int main ()
{

// Leia a distância em Km e a quantidade de litros de gasolina consumidos por um carro em 
// um percurso (a serem informadas pelo usuário), calcule o consumo em Km/l e escreva uma 
// mensagem de acordo com a tabela abaixo

    
    float consumo, km, qtlt;

    printf("Escreva a quantidade de KM: \n");
    scanf("%f", &km);

    printf("Escreva a quantidade de litros consumidos: \n");
    scanf("%f", &qtlt);

    consumo= (km/qtlt);

    if (consumo <8)
    {
        printf("venda o carro! \n");
    }
    else if (consumo >=8 && consumo <14)
    {
        printf("Economico \n");
    }
    else if (consumo >= 14)
    {
        printf("Super economico \n");
    }

    printf("O consumo do teu carro eh: %.2f por litro. ", consumo);


}