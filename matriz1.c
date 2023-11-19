#include <stdio.h>

int main() {
    int vendas[5][4];
    int totalVendasVendedor[5] = {0};
    int totalVendasSemana[4] = {0};
    int totalVendasMes = 0;

    for (int vendedor = 0; vendedor < 5; vendedor++) {
        printf("Vendedor %d\n", vendedor + 1);
        for (int semana = 0; semana < 4; semana++) {
            printf("Semana %d: ", semana + 1);
            scanf("%d", &vendas[vendedor][semana]);

            totalVendasVendedor[vendedor] += vendas[vendedor][semana];
            totalVendasSemana[semana] += vendas[vendedor][semana];
            totalVendasMes += vendas[vendedor][semana];
        }
    }

    for (int vendedor = 0; vendedor < 5; vendedor++) {
        printf("Total de vendas do Vendedor %d: R$%d\n", vendedor + 1, totalVendasVendedor[vendedor]);
    }

    for (int semana = 0; semana < 4; semana++) {
        printf("Total de vendas da Semana %d: R$%d\n", semana + 1, totalVendasSemana[semana]);
    }

    printf("Total de vendas do mes: R$%d\n", totalVendasMes);

    return 0;
}
