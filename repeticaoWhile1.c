#include <stdio.h>

int main() {
    float peso, maiorpeso = 0, menorpeso = 999999;
    int cod_maior, cod_menor;
    int cod = 1;

    printf("\n Insira a identificacao do BOI: \n");
    scanf("%d", &cod);

    while (cod != 0)
    {
        printf(" \n Insira o PESO do boi: \n");
        scanf("%f", &peso);

        if (peso > maiorpeso) 
        {
            maiorpeso = peso;
            cod_maior = cod;
        }

        if (peso < menorpeso) 
        {
            menorpeso = peso;
            cod_menor = cod;
        }

        printf("\n Insira a identificacao do BOI: \n");
        scanf("%d", &cod); 
    }

    printf("\n O maior boi eh de codigo %d e pesa %.2f kg \n", cod_maior, maiorpeso);
    printf("\n O menor boi eh de codigo %d e pesa %.2f kg \n", cod_menor, menorpeso);

    return 0;
}
