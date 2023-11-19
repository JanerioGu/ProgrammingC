/* Você foi designado para desenvolver um programa em C que ajude os usuários a calcular o consumo de água em uma residência. 
O programa deverá utilizar uma função que recebe como parâmetro as seguintes informações. 
Quantidade de pessoas na residência: O usuário deve informar o número de pessoas que moram na casa. 
Consumo médio diário por pessoa (em litros): O usuário deve inserir quantidade média de água consumida por dia, por pessoa, na residência 
O programa deve retornar para o principal o consumo e mensal de água daquela residência. */

#include <stdio.h>
#include <stdlib.h>

float cal_agua(float media, float qtdAgua, float qtdP)
{
    float qtdTotal;

    qtdTotal= qtdP * qtdAgua;
    
    media = qtdTotal* 30;

    
    return media;

}

int main()

{
    float qtdP, qtdAgua, media;

    printf("\n Insira a quantidade de pessoas que moram na casa: \n");
    scanf("%f", &qtdP);

    printf("\n Insira a quantidade media de agua consumida por pessoa em um dia (LTS): \n");
    scanf("%f", &qtdAgua);

    printf("\n O consumo medio da residencia eh: %.2f", cal_agua(media, qtdAgua, qtdP));
}