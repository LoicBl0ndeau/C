#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int compterChar(char chaine[], int tailleMax){
	int compteur = -1;
	for (int i = 0; i < tailleMax; i++)
	{
		if (chaine[i] != -52) {
			compteur++;
		}
	}
	return compteur;
}

int main() {
	setlocale(LC_ALL, "fr-FR");
	int tailleMax = 100;
	char chaine[100];
	printf("Entrez une chaîne de caractères : ");
	scanf("%s", &chaine);
	printf("%d", compterChar(chaine, tailleMax));

	return EXIT_SUCCESS;
}