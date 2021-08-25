// Bibliotecas
#include "functions.h"

// Recursividade
void placarRecursivo(char p[], int m, int n, int pos)
{
	// Fim da recursividade e Impressão
	if(m == 0 && n == 0)
	{
		p[pos] = '\0';
		printf("%s\n",p);
	}
	else
	{
		// Possibilidades 'A'
		if(m > 0)
		{
			p[pos] = 'A';
			placarRecursivo(p, m-1, n, pos+1);
		}

		// Possibilidades 'B'
		if(n > 0)
		{
			p[pos] = 'B';
			placarRecursivo(p, m, n-1, pos+1);
		}
	}
}

// Impressão dos placares
void placar_possiveis(int m, int n)
{
		// Variáveis
		char placares [MAX];

		// Preenchimento do vetor e Impressão
		placarRecursivo(placares,m,n,0);
}
