//Construa um algoritmo que apresente o peso total que será carregado por umcontainer. Sabe-se que esse container carrega 32 caixas, com pesos diferentes. Seráentrada do programa o peso (P) de cada uma das caixas

#include <stdio.h>

int main()

{

    int i=0;
    float peso, pesototal;

    for ( i = 0; i < 10; i++)
    {
        printf("\n Qual o peso da CAIXA numero %i? \n", i+1);
        scanf("%f ", &peso);

        pesototal+=peso;

    }

    printf("\n O peso total eh de: %.2f", pesototal);

}