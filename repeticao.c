//Faça um programa em para informar o valor do ingresso que deve ser cobradode um fã que deseja assistir ao Show do Guns N' Roses. Considere que:
//1 - Valor do ingresso na Pista Premium 
//1- Valor do ingresso na Pista Premium = 970,00
//2- Valor do ingresso na Pista = 480,00
//3- Valor do ingresso na Cadeira Inferior = 650,00
//4- Valor do ingresso na Cadeira Superior = 380,00
//Para todas as modalidades você deve verificar se o fã paga ingressoINTEIRO ou MEIO ingresso.

#include <stdlib.h>

int main()

{
    int valorIngresso;
    char tipoIngresso;
    float cod;

    printf("\n Insira 1 para ingresso PISTA PREMIUM \n");
    printf("\n Insira 2 para ingresso PISTA \n");
    printf("\n Insira 3 para ingresso CADEIRA INFERIOR \n");
    printf("\n Insira 4 para ingresso CADEIRA SUPERIOR \n");

    printf("\nQual eh o codigo do ingreso? :\n");
    scanf("%d", &cod);

    printf("\n Qual tipo do ingresso? (I -Inteiro ou M – Meio-Ingresso). \n");
    scanf(" %c", &tipoIngresso);

    switch (cod)
    {
        case 1:
            if (tipoIngresso =='i')
                valorIngresso=970.00;
                    if(tipoIngresso== 'm')
                        valorIngresso=485.00;
        break;

        case 2:
            if (tipoIngresso =='i')    
                valorIngresso=480.00;
                    if(tipoIngresso== 'm')
                        valorIngresso=240.00;

        break;

        case 3:
            if (tipoIngresso =='i')    
                    valorIngresso=650.00;
                        if(tipoIngresso== 'm')
                            valorIngresso=325.00;
        break;

        case 4:
                if (tipoIngresso =='i')
                    valorIngresso=380.00;
                        if(tipoIngresso== 'm')
                            valorIngresso=190.00;
        break;
        
        default:
            printf("\nEsta nao eh uma opcao valida!\n");
            break;
    }

    Printf("\n O valor a pagar eh de: %d \n", valorIngresso);

    Printf("\n ################################################## \n");
    printf("\n Tenha um bom SHOW! \n");

}