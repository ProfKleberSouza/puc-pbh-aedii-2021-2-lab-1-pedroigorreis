// Bibliotecas
#include "functions.h"

// Inverter string
void inverte(char texto[])
{
	int i = 0;
	int tamanho = strlen(texto);

	for(i = 0; i < tamanho / 2; i++)
	{
		char aux = texto[i];
		texto[i] = texto[tamanho - i - 1];
		texto[tamanho - i - 1] = aux;
	}

	printf("%s\n", texto);
}