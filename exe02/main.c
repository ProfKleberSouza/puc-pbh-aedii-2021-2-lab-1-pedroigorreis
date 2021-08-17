#include <stdio.h>
#include "functions.h"

int main() 
{
  int N;
  scanf("%d", &N);

  int v[N];
  for(int i = 0; i < N; i++)
  {
    scanf("%d", &v[i]);
  }
  printf("MENOR = %d\n",menor(v,N));
  return(0);
}
