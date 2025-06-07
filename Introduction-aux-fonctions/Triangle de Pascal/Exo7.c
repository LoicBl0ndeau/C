#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "fr-FR");
	int triangle[56];
	for (int i = 0; i < 56; i++)
	{
		triangle[i] = 1;
	}
	int rang = 0;
	printf("Entrez un rang (entre 2 et 10) : ");
	scanf("%d", &rang);
	int rangOrigine = rang;
	rang--;
	for (int i = 0; i < rang; i++)
	{
		triangle[rangOrigine+1+i] = i+1;
	}
	rang--; //Fin initialisation
	while (rang > 0) {
		rangOrigine++;
		for (int i = 0; i < rang; i++)
		{
			triangle[rangOrigine + 1 + i + rang] = triangle[rangOrigine + i + rang] + triangle[rangOrigine + i];
		}
		rang--;
	}
	for (int i = 0; i < 55; i++)
	{
		printf(" %d ", triangle[i]);
	}
}