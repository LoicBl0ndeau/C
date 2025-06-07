#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define sizeCarre 3

bool isMagic(int carre[sizeCarre][sizeCarre]) {
	int sommeColonnes[sizeCarre];
	int sommeLignes[sizeCarre];
	int sommeDiagonales[2] = { 0,0 };
	for (int i = 0; i < sizeCarre; i++)
	{
		sommeDiagonales[0] += carre[i][i];
		sommeDiagonales[1] += carre[sizeCarre - 1 - i][sizeCarre - 1 - i];
		sommeColonnes[i] = 0;
		sommeLignes[i] = 0;
		for (int j = 0; j < sizeCarre; j++)
		{
			sommeLignes[i] += carre[i][j];
			sommeColonnes[i] += carre[j][i];
		}
	}
	int compteur = 0;
	for (int i = 0; i < sizeCarre-1; i++)
	{
		if (sommeColonnes[i] == sommeColonnes[i + 1]) {
			compteur++;
		}
		if (sommeLignes[i] == sommeLignes[i + 1]) {
			compteur++;
		}
	}
	if (sommeLignes[0] == sommeColonnes[0] && compteur == 2*(sizeCarre-1) && sommeDiagonales[0] == sommeDiagonales[1] && sommeDiagonales[0] == sommeLignes[0])
	{
		return true;
	}
	else {
		return false;
	}
}

int main() {
	int carre[sizeCarre][sizeCarre] = { { 2,7,6 }, { 9,5,1 }, { 4,3,8 } };
	printf("%d",isMagic(carre));

	return EXIT_SUCCESS;
}