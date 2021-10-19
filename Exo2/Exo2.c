#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void dispTab(int tableau[10][10]) {
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			printf(" %d ", tableau[i][j]);
		}
		printf("\n");
	}
}

int main() {
	srand((unsigned)time(NULL));

	int tab[10][10];
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			tab[i][j] = rand() % 10;
		}
	}
	dispTab(tab);
	printf("\n");
	int tab2[10][10];
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			tab2[j][i] = tab[i][j]; //Mettre tab2[9-j][9-i] = tab[i][j]; pour l'autre diagonale.
		}
	}
	dispTab(tab2);
}