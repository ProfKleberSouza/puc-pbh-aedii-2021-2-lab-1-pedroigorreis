// Bibliotecas
#include "functions.h"

// Main
int main (void)
{
	int x = 0;
	int z = 0;

	scanf("%d %d", &x, &z);

	printf("MDC = %d\n", mdc(x, z));

	return 0;
}