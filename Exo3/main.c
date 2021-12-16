#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct Single_coefficient {
	int coeff; // coefficient du polynôme
	struct Single_coefficient* next; // pointeur vers le maillon suivant
} Single_coefficient;

typedef struct LinkedListCoefficients {
	Single_coefficient* head; // pointeur vers la tête de liste
	int size;
} LinkedListCoefficients;
void add_an_coefficient(LinkedListCoefficients* liste, int coefficient);
LinkedListCoefficients* create_liste();
int calculate_polynome(LinkedListCoefficients* liste, int x);


int main() {
	LinkedListCoefficients* liste = create_liste();
	add_an_coefficient(liste, 2);
	add_an_coefficient(liste, 5);
	add_an_coefficient(liste, -3);
	add_an_coefficient(liste, 8);
	int test = calculate_polynome(liste, 1);
	printf("%d",test);
	return EXIT_SUCCESS;
}

LinkedListCoefficients* create_liste() {
	LinkedListCoefficients* liste = (LinkedListCoefficients*)malloc(sizeof(LinkedListCoefficients));
	if (liste != NULL) {
		liste->head = NULL;
		liste->size = 0;
	}
	return liste;
}

void add_an_coefficient(LinkedListCoefficients* liste, int coefficient) {
	Single_coefficient* tmp = (Single_coefficient*)malloc(sizeof(Single_coefficient));
	if (tmp != NULL) {
		if (liste->size == 0) {
			tmp->coeff = coefficient;
			tmp->next = NULL;
			liste->head = tmp;
			liste->size++;
		}
		else {
			Single_coefficient* tail = liste->head;
			for (int i = 1; i < liste->size; i++)
			{
				tail = tail->next;
			}
			tmp->coeff = coefficient;
			tmp->next = NULL;
			tail->next = tmp;
			liste->size++;
		}
	}
}

int calculate_polynome(LinkedListCoefficients* liste, int x) {
	Single_coefficient* tmp = (Single_coefficient*)malloc(sizeof(Single_coefficient));
	if (tmp != NULL && liste->head != NULL) {
		tmp = liste->head;
		int somme = tmp->coeff;
		for (int i = 1; i < liste->size; i++)
		{
			tmp = tmp->next;
			somme += tmp->coeff * pow(x,i);
		}
		return somme;
	}
	else {
		return -1;
	}
}