#include <stdio.h>
#include <locale.h>
#include <ctype.h>
#include <stdlib.h>

int main ()
{
//  Faça um algoritmo para ler: a descrição do produto (nome), a quantidade adquirida e o 
//  preço unitário. Calcular e escrever o total (total = quantidade adquirida * preço unitário), o 
//  desconto e o total a pagar (total a pagar = total - desconto), sabendo-se que: 
//   - Se quantidade <= 5 o desconto será de 2% 
//   - Se quantidade > 5 e quantidade <=10 o desconto será de 3% 
//   - Se quantidade > 10 o desconto será de 5% 

char nome[50];
float quantidade, preco, desconto, total, totalcdesconto;

    printf("Qual eh o seu produto? \n");
    scanf("%s", nome);

    printf("Qual a quantidade deste produto: \n");
    scanf("%f", &quantidade);

    printf("Qual o valor deste produto?: \n");
    scanf("%f", &preco);

    if (quantidade <=5)
{
	desconto=(preco*0.2);
}
else if (quantidade >5 && quantidade <=10)
{
	desconto=(preco*0.3);
}
else if (quantidade >10)
{
	desconto=(preco*0.5);
}

total= (quantidade * preco);

totalcdesconto= (total-desconto);


printf("Seu produto eh: %s\n", nome);
printf("O valor total a pagar eh: R$\n %.2f ", totalcdesconto);

}