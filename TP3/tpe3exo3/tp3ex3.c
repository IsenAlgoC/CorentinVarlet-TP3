#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
	float notes[29], N;
	int i = 0, abs = 0;
	char choix;
	int STOP = 0, valide = 0;


	do
	{
		printf_s("entrer la note n�%d \n", i);
		scanf_s("%f", &N);
		if (N < 0 || N>20)
		{
			printf_s("eleve absent ? ou voulez-vous arreter la saisie des notes ? A/O/N\n Absent=A\n Arret de la saisie=O\n Continuer la saisie =N\n ");
			do {
				choix = getchar();
			} while ((choix != 'A') && (choix != 'O') && (choix != 'N'));
			switch (choix)
			{
			case 'A':
				printf_s("eleve absent\n ");
				abs++;
				notes[i] = -1;
				break;
			case 'O':
				printf_s("arret de la saisie des notes\n");
				STOP = 1;
				break;
			case 'N':
				printf_s("saisir de nouveau la note\n");
				i--;
				break;
			default:
				printf_s("saisis non valide\n");
			}
		}
		else {
			notes[i] = N;
			valide++;
		}
		i++;
	} while ((STOP != 1) && (i != 30));
	
	printf_s("\n %d note valide\n", valide);
	printf_s("%d absents\n", abs);
	int j = 0, k=0;
	float min = 20, max = 0;
	float somme = 0, moyenne, ecartType, tampon = 0;
	for (j = 0; j < 30; j++)
	{
		if (notes[j] < min)
			min = notes[j];

		if (notes[j] > max)
			max = notes[j];
		somme += notes[j];
	}
	moyenne = (somme+ abs)/ valide;
	for (k  = 1; k < 30;k++)
	{
		tampon += (notes[k]- moyenne) * (notes[k] - moyenne);
	}
	ecartType = sqrtf((1 / (valide - 1)) * tampon);
	printf_s(" la note minimale est %.2f et la note maximale est %.2f\n", min, max);
	printf_s("la moyenne de classe est %f\n", moyenne);
	printf_("l'ecart type est %.2f ",ecartType);

}
