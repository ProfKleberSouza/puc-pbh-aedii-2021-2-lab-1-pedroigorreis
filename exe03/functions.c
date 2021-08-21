// Bibliotecas
#include "functions.h"

// Atribuição de maior/menor valor
void menor_maior(int v[], int n, int *menor, int *maior)
{
  	for(int i = 0; i < n; i++)
  	{
  		if(i == 0)
  		{
  			*maior = v[i];
  			*menor = v[i];
  		}	
	    if(v[i] > *maior)
	    {
      		*maior = v[i];
	    }
    	if(v[i] < *menor)
    	{
    		*menor = v[i];
    	}
  	}
}
