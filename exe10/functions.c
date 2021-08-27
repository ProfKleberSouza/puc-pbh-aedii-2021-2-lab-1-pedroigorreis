// Bibliotecas
#include "functions.h"

// Recursividade
void Recursiva(char p[], int d, int pos)
{
	// Fim da recursividade e Impressão
	if(d == 0)
	{
		p[pos] = '\0';
		printf("%s\n",p);
	}
	else
	{
		// Possibilidades
		p[pos] = '0';
		Recursiva(p, d-1, pos+1);

		p[pos] = '1';
		Recursiva(p, d-1, pos+1);
	}
}

// Impressão das possibilidades
void tabela_verdade(int d)
{
	// Variáveis
	char possibilidades[MAX];

	// Preenchimento do vetor e Impressão
  Recursiva(possibilidades, d, 0);
}
