#define _CRT_SECURE_NO_WARNINGS
#include <stdlib.h>
#include <stdio.h>

int decalageADroite(char tab[6], int tabSize) {
	char tmp[6];
	for (int i = 0; i < tabSize; i++)
	{
		tmp[i] = tab[i];
	}
	for (int i = 0; i < tabSize - 2; i++)
	{
		tab[i + 1] = tmp[i];
	}
	tab[0] = 32;
	for (int i = 0; i < tabSize-1; i++)
	{
		printf("%c", tab[i]);
	}
	if (tabSize <= 0) {
		return -1;
	}
	else {
		return tabSize;
	}
}

int decalageCirculaireADroite(char tab[6], int tabSize, int nbRang) {
	char tmp[6];
	for (int i = 0; i < nbRang; i++)
	{
		for (int j = 0; j < tabSize; j++)
		{
			tmp[j] = tab[j];
		}
		for (int j = 0; j < tabSize - 1; j++)
		{
			if (j == tabSize - 2) {
				tab[0] = tmp[j];
			}
			else {
				tab[j + 1] = tmp[j];
			}
		}
	}
	for (int i = 0; i < tabSize - 1; i++)
	{
		printf("%c", tab[i]);
	}
	if (tabSize <= 0) {
		return -1;
	}
	else {
		return tabSize;
	}
}

int main() {
	int tabSize = 6;
	int nbRang = 4;
	char tab[6] = "Hello";
	decalageADroite(tab, tabSize);
	printf("\n");
	char tab2[6] = "Hello";
	decalageCirculaireADroite(tab2, tabSize, nbRang);

	return EXIT_SUCCESS;
}