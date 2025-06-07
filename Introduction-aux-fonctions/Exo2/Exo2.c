#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

#define tabSize 100
int tab[tabSize];

int remplirTab(int nbVal, int min, int max) {
	for (int i = 0; i < nbVal; i++)
	{
		tab[i] = (rand() % (max + 1 - min)) + min;
	}
	return nbVal;
}

int afficherTab(int nbVal) {
	for (int i = 0; i < nbVal; i++)
	{
		printf(" %d ", tab[i]);
	}
	return nbVal;
}

int maxTab(int nbVal, int min) {
	int max = min;
	for (int i = 0; i < nbVal; i++)
	{
		if (tab[i] > max) {
			max = tab[i];
		}
	}
	return max;
}

int main() {
	setlocale(LC_ALL, "fr-FR");
	srand((unsigned)time(NULL));
	int min, max, nbVal;
	printf("Entrez le min : ");
	scanf("%d", &min);
	printf("Entrez le max : ");
	scanf("%d", &max);
	printf("Entrez le nombre de cases à remplir : ");
	scanf("%d", &nbVal);
	printf("\n%d\n", remplirTab(nbVal, min, max));
	printf("\n%d", afficherTab(nbVal));
	printf("\n%d", maxTab(nbVal, min));
}