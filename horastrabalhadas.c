#include <stdio.h>
#include <locale.h>
#include <ctype.h>
#include <stdlib.h>

int main ()

{
//A escola “APRENDER” faz o pagamento de seus professores por hora/aula. Faça um 
//algoritmo que calcule e exiba o salário de um professor. Sabe-se que o valor da hora/aula 
//segue a tabela abaixo: 
// Professor Nível 1 R$12,00 por hora/aula 
// Professor Nível 2 R$17,00 por hora/aula 
// Professor Nível 3 R$25,00 por hora/aula 
        
int nivel, valorpagamento;
float quantidadehoras;

    printf("Escreva o nivel do professor: (1, 2 ou 3) \n");
    scanf("%i", &nivel);

    printf("Indique a quantidade de horas trabalhadas: \n");
    scanf("%f", &quantidadehoras);

    switch (nivel)
    {
    case 1:
        valorpagamento= (quantidadehoras*12);
        break;
    
    case 2:
        valorpagamento= (quantidadehoras*17);
        break;

    case 3:
        valorpagamento= (quantidadehoras*25);
        break;
    default:
        printf("Nivel inserido invalido, por gentileza coloque numeros de 1 a 3. \n");
        return 1;
        break;
    }

    printf("O valor a ser recebido eh de: R$%.2i", valorpagamento);


}