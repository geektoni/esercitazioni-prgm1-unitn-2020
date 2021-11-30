#include "1-caesar.h"

void crypt(char parola[], int chiave) {
    for (int i = 0 ; parola[i] != '\0'; i++) {
        int encrypted = (int) parola[i];
        encrypted += chiave;
        if (encrypted > (int) 'z') {
            encrypted = encrypted - 'z' + 'a' - 1;
        }
        parola[i] = (char) encrypted;
    }
}

void decrypt(char parola[], int chiave) {
    for (int i = 0 ; parola[i] != '\0'; i++) {
        int decrypted = (int) parola[i];
        decrypted -= chiave;
        if (decrypted < 'a') {
            decrypted = decrypted + 'z' - 'a' + 1;
        }
        parola[i] = (char) decrypted;
    }
}