#include <stdio.h>
#include <stdlib.h>
#define carre(x) (x)*(x) // on ajoute des parenthèse pour qu'il y ait la priorité sur l'addition et non sur la multiplication
//si on ne met pas les parenthèses carre(Nb+1) renvoie 11 au lieu de 36

int main() {
	int Nb = 5;
	printf_s("%d\n", carre(Nb));
	printf_s("%d", carre(Nb + 1));
	
}