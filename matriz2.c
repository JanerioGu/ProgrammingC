/*5) A cidade de "Cleantown" está empenhada em controlar a poluição do are monitorar diariamente os níveis de substâncias prejudiciais em quatroáreas diferentes da cidade. Os gases monitorados são óxidos de nitrogênio(NOx), monóxido de carbono (CO), dióxido de enxofre (SO2) e partículasem suspensão (PM10).Cada área da cidade tem um índice de poluição diária para cada um dosquatro poluentes, representados por uma matriz 4x4, onde as linhasrepresentam as áreas (A1, A2, A3, A4) e as colunas representam ospoluentes (NOx, CO, SO2 , PM10).Escreva um programa em linguagem C que realize as operações:
1.Leia os índices de poluição para cada área e poluente, armazenando-osem uma matriz.
2.Calcule e exiba a média de poluição para cada poluente em toda acidade*/

#include <stdio.h>
#include <windows.h>
#include <locale.h>
#include <stdlib.h>

int main()

{
    int i, j;
    int poluente[4][4];
    float mediaPoluente[4]={0,0};


    for ( i = 0; i < 4; i++)
    {
        for ( j = 0; j< 4; j++)
        {
                printf("\n Insira a quantidade do poluente %d area %d: \n", i+1, j+1);
                scanf("%d", &poluente[i][j]);

                mediaPoluente[j]+= poluente[i][j];
        }
    }

    printf("\nMedia de poluicao na cidade:\n");

    printf("NOx (Oxidos de Nitrogenio): %.2f\n", mediaPoluente[0] / 4);
    printf("CO (Monoxido de Carbono): %.2f\n", mediaPoluente[1] / 4);
    printf("SO2 (Dioxido de Enxofre): %.2f\n", mediaPoluente[2] / 4);
    printf("PM10 (Particulas em Suspensao): %.2f\n", mediaPoluente[3] / 4);

}
