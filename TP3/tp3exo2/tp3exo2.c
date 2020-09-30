#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
	unsigned long Nb = 2868838400;
	int octet = sizeof(Nb);
	int compt = 0;
	printf_s("le nombre contient %d octets\n", octet);
	int bit = sizeof(Nb)*8;
	printf_s("le nombre contient %d bits\n", bit);

	while (compt<32)
	{
		if ((Nb >> compt)  & 1) 
			printf_s("bit %d ON\n", compt);
		else
			printf_s("bit %d OFF\n", compt);
		compt++;
	}
	printf_s("Bye !");
}