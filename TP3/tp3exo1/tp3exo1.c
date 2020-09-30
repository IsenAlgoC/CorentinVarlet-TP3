#include <stdio.h>
#include <stdlib.h>
#define carre(x) x*x

int main() {
	int Nb = 5;
	printf_s("%d\n", carre(Nb));
	printf_s("%d", carre(Nb + 1));
}