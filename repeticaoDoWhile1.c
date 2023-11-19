//Joana pesa 55kg e engorda 200gr por ano, enquanto Gabriela pesa 51kg e engorda 300gr por ano. Faça um programa que calcule
// e no final mostre na tela em 
//quantos anos Gabriela será mais gorda que a Joana.Utilize o comando de Repetição ENQUANTO ...FAÇA.

#include <stdio.h>

int main()

{

    float pesoGabriela=51.000, pesoJoana=55.000;
    float count=0;

        do
        {

            pesoJoana+=0.200;
            pesoGabriela+=0.300;
            count++;

        } while (pesoGabriela < pesoJoana);

    system("cls");

	printf("\n\n A quantidade de anos necessarios eh: %.2f\n\n", count);
	
	system("pause");

}