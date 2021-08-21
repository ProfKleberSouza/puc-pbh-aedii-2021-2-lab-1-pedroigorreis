// Bibliotecas
#include <stdio.h>
#include "functions.h"

// Main
int main(void)
{
  	int n;
  	scanf("%d", &n);

    // Variáveis
	  int i = 0;
  	int x = 0;
  	int y = 0;
  	int vetor[n];

    // Preenchimento do vetor
  	for(i = 0; i < n; i++)
  	{
	    scanf("%d", &vetor[i]);
  	}

    // Processamento
  	menor_maior(vetor, n, &x,&y);

    // Impressão dos dados
  	printf("MENOR = %d\n", x);
  	printf("MAIOR = %d\n", y);

  	return(0);
}
