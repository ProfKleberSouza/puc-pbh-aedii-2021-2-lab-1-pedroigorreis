// Bibliotecas
#include "functions.h"

// Limites
#define MAX 100

// Leitura segura de string(s)
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
	
	if(is_palindromo(lerString(string)))
	{
		printf("SIM\n");
	}

	else
	{
		printf("NÃO\n");
	}
	return 0;
}
