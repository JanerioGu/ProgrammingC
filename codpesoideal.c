#include <stdio.h>
#include <windows.h>
#include <locale.h>

int main()
{	setlocale (LC_ALL, "PORTUGUESE");
	float alt, peso_ideal;
	char sexo;
	
	printf("\n Escreva seu genero apenas com o primeiro caractere (ex: F):");
	scanf("%c", &sexo);
	
	printf("\n Insira sua altura (ex:1,78):");
	scanf("%f", &alt);

	
	if (sexo =='M'|| sexo =='m')
	{
		peso_ideal=(72.7 * alt)-58;
	}
	
	else if (sexo =='F'|| sexo == 'f')
	{
		peso_ideal=(62.1 * alt)-44.7;
	}
	
	printf("Seu peso ideal é:%.2f", peso_ideal);
	
	
	
}
