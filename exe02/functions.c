// +----------------------------+
// | LabI - C | @pedroigor.reis |
// +----------------------------+

#include "functions.h"

int menor(int v[], int n)
{
  int menorN;
  for(int i = 0; i < n; i++)
  {
    if(i == 0)
    {
      menorN = v[i];
    }
    if(v[i] < menorN)
    {
      menorN = v[i];
    }
  }
  return menorN;
}
