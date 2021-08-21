// Bibliotecas 
#include "functions.h"

// Verificar palíndromo
bool palindromoRec(char texto[], int i, int f)
{
  if(i >= f){return true;}
  if(texto[i] != texto[f]){return false;}
  i++;
  f--;
  return palindromoRec(texto, i, f);
}

bool is_palindromo(char texto[])
{
  return palindromoRec(texto, 0, strlen(texto)-1);
}
