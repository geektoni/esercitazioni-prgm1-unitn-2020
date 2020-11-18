#ifndef EMAIL_MODULO_H
#define EMAIL_MODULO_H

// Ritorna l'indice della prima occorrenza del carattere nella stringa
int index_of(char carattere, char * stringa);

// Controlla se un carattere è valido
bool is_valid(char carattere);

// Controlla se una parte dell'indirizzo è valido
bool controlla_parola(int start, int end, char * stringa);

// Controlla se la parola è un indirizzo
bool is_email(char * indirizzo);

#endif
