#define _CRT_SECURE_NO_WARNINGS
#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>;

#define TAILLECOTE 4

bool rechercheSequence(char tab[TAILLECOTE][TAILLECOTE], char seq[], int tailleSequence)
{
	int nbApparition = 0;
	int nbApparitionLettres[TAILLECOTE];
	int possibilitees[TAILLECOTE][TAILLECOTE];
	for (int i = 0; i < TAILLECOTE; i++)
	{
		nbApparitionLettres[i] = 0;
	}
	for (int i = 0; i < TAILLECOTE; i++)
	{
		for (int j = 0; j < TAILLECOTE; j++)
		{
			for (int k = 0; k < tailleSequence; k++)
			{
				if (tab[i][j] == seq[k]) {
					nbApparitionLettres[k] += 1;
					nbApparition += 1;

				}
			}
			for (int k = 0; k < nbApparition; k++)
			{
				for (int l = 0; l < nbApparitionLettres[]; l++)
				{
					possibilitees[k]
				}
			}
		}
	}

	return false;
}

int main() {
	char seq[3] = { 'B','U','G' };
	char tab[TAILLECOTE][TAILLECOTE] = { { 'S','O','S','I' }, {'A','N','B','L'}, {'N', 'U', 'I', 'O'}, {'G','U','R','T'} };
	printf("%d",rechercheSequence(tab, seq, 3));
	return EXIT_SUCCESS;
}