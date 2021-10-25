#include <iostream>
using namespace std;

bool palidromo(int valore);
int palindromo_ausiliaria(int valore, int temp);

int main() {

	int valore;
	cout << "Inserisci un valore: " << endl;
	cin >> valore;

	if (palidromo(valore)) {
		cout << "L'intero è palindromo!" << endl;
	} else {
		cout << "L'intero non è palindromo!" << endl;
	}

	return 0;
}

// Funzione per l'utente finale. "Nasconde" l'implementazione della funzione
// ricorsiva, così da rendere l'interfaccia più piacevole.
bool palidromo(int valore) {
	return valore == palindromo_ausiliaria(valore, 0);
}

// Funzione per il controllo del palindromo. Sostanzialmente, la funzione
// inverte il numero in modo ricorsivo (e.g., 456 diventa 654) e lo mette come
// valore di ritorno. Successivamente, è necessario solo controllare che il valore
// invertito sia uguale al valore originale. Se sono identici, allora il numero
// è palindromo.
int palindromo_ausiliaria(int valore, int temp) {

	if (valore == 0) {
		return temp;
	}

	temp = (temp * 10) + (valore % 10);

	return palindromo_ausiliaria(valore/10, temp);

}
