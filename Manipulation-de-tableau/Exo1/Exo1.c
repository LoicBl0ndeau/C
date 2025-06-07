#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

#define tabsize 100

void afficherTableau(float tab[tabsize]) {
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			printf("%.2f ", tab[j + i * 10]);
		}
		printf("\n");
	}
}

int main() {
	float tab[tabsize] = { 0.0 };
	float valeur = 0.0;
	unsigned char compteur = 0;
	while (valeur >= 0 && compteur < 100) {
		printf("Entrez une valeur : ");
		scanf("%f", &valeur);
		tab[compteur] = valeur;
		compteur++;
	}
	afficherTableau(tab);
	unsigned int position = 0;
	printf("\nPosition de la valeur a modifier (0 a %d) : ", tabsize-1);
	scanf("%d", &position);
	printf("\nEntrez la valeur a inserer : ");
	scanf("%f", &valeur);
	tab[position] = valeur;
	afficherTableau(tab);
	printf("\nPosition de la valeur a supprimer (0 a %d) : ", tabsize - 1);
	scanf("%d", &position);
	tab[position] = 0.0;
	afficherTableau(tab);
	float moyenne = 0;
	for (int i = 0; i < 100; i++)
	{
		moyenne += tab[i];
	}
	moyenne = moyenne / tabsize;
	printf("\nLa moyenne des valeurs du tableau est : %f", moyenne);

	return EXIT_SUCCESS;
}