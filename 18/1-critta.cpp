#include <cstring>
#include "1-critta.h"
using namespace std;

// Ritorna vero se il carattere dato in input è una lettera
// ritorna falso altrimenti
static bool is_lower(char carattere)
{
  return ( carattere >= 'a' && carattere <= 'z');
}

static bool is_capital(char carattere)
{
  return ( carattere >= 'A' && carattere <= 'Z');
}

void crypt(char parola [], int chiave)
{
  for (unsigned int i=0; i<strlen(parola); i++)
  {
    // Converti solo i caratteri che sono lettere
    if (is_lower(parola[i]) || is_capital(parola[i])){
      parola[i] += chiave;
    }
  }
}

void decrypt(char parola [], int chiave)
{
  for (unsigned int i=0; i<strlen(parola); i++)
  {
    // Converti solo i caratteri che sono lettere
    if (is_lower(parola[i]) || is_capital(parola[i])){
      parola[i] -= chiave;
    }
  }
}
