int index_of(char carattere, char * stringa)
{
  int indice = 0;
  while(stringa[indice] != '\0' && stringa[indice] != carattere)
    indice++;
  return indice;
}

// Controlla se un carattere è valido
bool is_valid(char carattere)
{
  return (( carattere >= 'a' && carattere <= 'z')
          || ( carattere >= 'A' && carattere <= 'Z')
          || ( carattere >= '0' && carattere <= '9')
          || carattere == '.'
          || carattere == '_'
        );
}

bool controlla_parola(int start, int end, char * stringa)
{
  bool risultato = true;
  if (start >= end)
  {
    risultato = false;
  } else {
    for (int i=start; i<end; i++)
    {
      if (!is_valid(stringa[i]))
        risultato = false;
    }
  }
  return risultato;
}

bool is_email(char * indirizzo)
{
  int chiocciola = index_of('@', indirizzo);
  int terminatore = index_of('\0', indirizzo);
  bool valido = true;
  if (chiocciola == terminatore) {
    valido = false;
  } else if (!controlla_parola(0, chiocciola-1, indirizzo)) {
    valido = false;
  } else if (!controlla_parola(chiocciola+1, terminatore, indirizzo)) {
    valido = false;
  } else if (indirizzo[0] == '.' || indirizzo[terminatore-1] == '.')
  {
    valido = false;
  }
  return valido;
}
