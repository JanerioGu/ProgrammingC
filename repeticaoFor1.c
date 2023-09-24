#include <stdlib.h>

//Um restaurante oferece em seu cardápio 5 pratos com preços diferentes. O valor de cada prato é dado abaixo:
//1 = R$25,902 
//2= R$33,903 
//3= R$44,904 
//4= R$50,995 
//5= R$75,00
//Sabendo que em um dia qualquer o restaurante recebeu 5 clientes, faça um algoritmoque mostre o faturamento do restaurante com base nas quantidades 
//que cada pessoa pediu e o preço dos pratos

int main()
{
    int i, opcaoPrato;
    float valorPrato=0;

        printf("\nPrato 1 valor de 25.90\n");
        printf("\nPrato 2 valor de 33.90\n");
        printf("\nPrato 3 valor de 44.90\n");
        printf("\nPrato 4 valor de 50.99\n");
        printf("\nPrato 5 valor de 75.00\n");


            for ( i = 0; i < 5; i++)
            {

        printf("\n Escolha a opcao do prato desejado: \n");
        scanf("%d", &opcaoPrato);

               switch (opcaoPrato)
               {
                case 1:
                    valorPrato+=25.90;
                break;
            
                case 2:
                    valorPrato+=33.90;
                break;

                case 3:
                    valorPrato+=44.90;
                break;

                case 4:
                    valorPrato+=50.99;
                break;

                case 5:
                    valorPrato+=75.00;
                break;

               default:
                    printf("Opcao inserida invalida");
                    return 1;
                break;


               }
            } 


        printf("\n o faturamento total do restaurante eh de: R$%.2f \n", valorPrato);
            

}
// Coletar a opcao que o cliente quer 'opcaoPrato'
// Coletar a QTD daquele mesmo prato, terei: qtd1,qtd2, qtd3, qtd4, qtd5.
// qtdTotalPrato+=qtdPrato;
// somatotal+=valorPrato;
//faturamento= valorPrato*qtdTotalPrato;