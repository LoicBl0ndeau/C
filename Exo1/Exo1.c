#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

int somme(int n) {
	int compteur = 0;
	for (int i = 0; i < n; i++)
	{
		compteur += i + 1;
	}
	if (compteur == 0) {
		return -1;
	}
	else {
		return compteur;
	}
}

int main() {
	int n;
	printf("Entrez un entier n : ");
	scanf("%d", &n);
	printf("\n%d", somme(n));
}