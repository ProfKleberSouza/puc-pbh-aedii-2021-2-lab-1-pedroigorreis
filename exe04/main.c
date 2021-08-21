// Bibliotecas
#include <stdio.h>
#include <string.h>
#include "functions.h"

// Limite(s)
#define MAX 100

// Ler string de forma segura
char *lerString(char *string)
{
	if(fgets(string, MAX, stdin) != NULL)
	{
		int iuc = strlen(string) - 1;
		if(string[iuc] == '\n') 
		{
				string[iuc] = '\0';
		}
		return string;
	}
	return NULL;
}

// Main
int main (void)
{
	char string[MAX];
	numero_vogais(lerString(string));
	return 0;
}
