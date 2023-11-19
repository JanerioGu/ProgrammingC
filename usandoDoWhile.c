#include <stdio.h> 
#include <stdlib.h> 
#include <conio.h> 
#include <math.h>
#include <string.h> 
#include <time.h> 
#include <windows.h>
#include <locale.h>

int main()
{
   float num, soma_num;
   int resp;
	
	
   	setlocale(LC_ALL, "Portuguese");
	
do{
	printf("\nInforme um numero real: ");
	scanf("%f", &num);
	soma_num = soma_num + num;
		
				
	system("cls");	
		
	printf("\n\nDeseja realizar informar outro numero?\n 1- sim \n 0- não \n ");
	scanf("%d", &resp);
	system("cls");
	
}while(resp==1);	

	system("cls");
	printf("\n\nA soma de todos os numeros informados eh: %.2f\n\n", soma_num);
	
	system("pause");
}