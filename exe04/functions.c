// Bibliotecas
#include <stdio.h>
#include "functions.h"

// Processamento e impressão
void numero_vogais(char texto[])
{
	int i = 0;

	int A = 0;
	int E = 0;
	int I = 0;
	int O = 0;
	int U = 0;
	
	while(texto[i] != '\0')
	{
		if(texto[i] == 'A' || texto[i] == 'a')
		{
			A++;
		}
		if(texto[i] == 'E' || texto[i] == 'e')
		{
			E++;
		}
		if(texto[i] == 'I' || texto[i] == 'i')
		{
			I++;
		}
		if(texto[i] == 'O' || texto[i] == 'o')
		{
			O++;
		}		
		if(texto[i] == 'U' || texto[i] == 'u')
		{
			U++;
		}
		i++;
	}
	
	printf("A = %d\n", A);
	printf("E = %d\n", E);
	printf("I = %d\n", I);
	printf("O = %d\n", O);
	printf("U = %d\n", U);
}
