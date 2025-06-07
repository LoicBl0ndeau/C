#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

// Un peu de code C pour vous donner des pistes sur la mani�re de manipuler et de comprendre
// la nature binaire des donn�es en informatique

int main() {
	// gestion des caract�res accentu�s dans la console.
	setlocale(LC_ALL, "fr-FR");

	// voici une possibilit� pour mettre la valeur d�cimale 65 dans la variable valeur1
	unsigned char valeur1 = 0b01000001; // noter le pr�fixe 0b qui indique qu'il s'agit d'une valeur directement 
	// rep�sent�e en binaire dans votre code source.
	// Ce qui �quivaut � �crire :
	// unsigned char valeur1 = 65; V�rifiez cela � la calculatrice et sur le papier !
	// puisque le compilateur n'a pas d'autre choix que de faire une traduction en binaire de cette valeur 65
	// Notez qu'en C, le type char correspond � une valeur enti�re cod�e sur 8 bits.
	// ce qui est aussi parfaitement adapt� pour stocker le code d'un caract�re ASCII, d'o� le type char ..
	// En ASCII, le code du caract�re A est 65.
	
	// pour obtenir de l'aide sur une fonction, s�lectionnez le nom de cette fonction et 
	// appuyez sur la touche F1 en �tant connect� � Internet.
	printf(" la variable valeur1 contient la valeur %d et repr�sente le caract�re %c \n", valeur1, valeur1);
	
	// Ecrire le code qui affiche la valeur binaire de valeur1

	unsigned char tmp = valeur1;
	printf("\n Ce qui donne en binaire :\n");

	// �tudiez ce code et expliquez comment il permet de faire un affichage de valeur en binaire,
	// ce que ne permet pas la commande printf
	// A quoi sert l'op�rateur / ?
	// A quoi sert l'op�rateur % ?
	// Verifiez que tmp = tmp % 128 peut aussi s'�crire tmp%=128
	printf("%u", tmp / 128); tmp %= 128;
	printf("%u", tmp / 64); tmp %= 64;
	printf("%u", tmp / 32); tmp %= 32;
	printf("%u", tmp / 16); tmp %= 16;
	printf("%u", tmp / 8); tmp %= 8;
	printf("%u", tmp / 4); tmp %= 4;
	printf("%u", tmp / 2); tmp %= 2;
	printf("%u", tmp % 2);
	printf("\n");

	// plus rapidement
	tmp = valeur1;
	
	printf("\n Ce qui donne en binaire (version 2) :\n");

	// expliquez le principe de fonctionnement de l'expression : variable = condition ? valeur1 : valeur2
	for (int i = 0; i < 8; i++) {
		// A quoi sert l'op�rateur & dans ce contexte ?
		printf("%u", (tmp & 128) == 0 ? 0 :1);
		// A quoi sert l'op�rateur << ?
		tmp <<= 1;
	}

	// Qu'est-ce que le bit de poids fort, MSB ?
		// calcul de la valeur repr�sent�e par le bit de poids fort (MSB)
	int nbOctets = sizeof(valeur1);
	int nbBits = nbOctets * 8;

	int valeurMSB = (int)pow(2.0, 7.0);
	printf("\n La valeur du MSB avec pow est %d", valeurMSB);

	// calcul de la valeur du bit de poids fort - version 2

	valeurMSB = 1 << (nbBits - 1);
	printf("\n La valeur du MSB avec d�calage � gauche de 1 , %d fois, est %d\n", nbBits-1, valeurMSB);
	// mettez un point d'arr�t et
	// d�roulez ce programme pas-�-pas en observant la valeur des variables locales pour mieux comprendre
	printf("\n Ce qui donne en binaire (version 3) :\n");
	tmp = valeur1;
	for (int i = 0; i < nbBits; i++) {
		printf("%u", (tmp & valeurMSB) == 0 ? 0 : 1);
		tmp <<= 1;
	}

	system("pause");

	return(EXIT_SUCCESS);
}

