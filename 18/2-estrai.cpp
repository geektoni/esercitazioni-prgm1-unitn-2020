#include "2-estrai.h"

char * estrai_stringa(char* stringa)
{
  char * risultato = new char[MAX_DIM];
  estrai(stringa, 0, risultato, 0);
  return risultato;
}

void estrai(char * stringa, int idx, char * risultato, int idx_r)
{
  if (stringa[idx] == '\0'){
    risultato[idx_r] = '\0';
  } else if (stringa[idx] >= 'A' && stringa[idx] <= 'Z')
  {
    risultato[idx_r] = stringa[idx];
    estrai(stringa, idx+1, risultato, idx_r+1);
  } else {
    estrai(stringa, idx+1, risultato, idx_r);
  }
}
