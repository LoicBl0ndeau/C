#include <stdio.h>
#include <stdlib.h>

typedef struct Single_coefficient {
	int coeff; // coefficient du polynôme
	struct Single_coefficient* next; // pointeur vers le maillon suivant
} Single_coefficient;

typedef struct SingleLinkedListElem {
	Single_coefficient* data;
} SingleLinkedListElem;

typedef struct LinkedListCoefficients {
	SingleLinkedListElem* head; // pointeur vers la tête de liste
	int size;
} LinkedListCoefficients;void add_an_coefficient(LinkedListCoefficients* liste, int coefficient);LinkedListCoefficients* create_liste();int main() {	LinkedListCoefficients* liste = create_liste();	add_an_coefficient(liste, 2);
	add_an_coefficient(liste, 5);
	add_an_coefficient(liste, -3);
	add_an_coefficient(liste, 8);	return EXIT_SUCCESS;}LinkedListCoefficients* create_liste() {	LinkedListCoefficients* liste;	liste->head = NULL;	liste->size = 0;	return liste;}void add_an_coefficient(LinkedListCoefficients* liste, int coefficient) {	Single_coefficient* tmp = (Single_coefficient*)malloc(sizeof(Single_coefficient));	if (tmp != NULL) {		SingleLinkedListElem* tail = liste->head;		for (int i = 0; i < liste->size; i++)
		{
			tail = tail->data->next;
		}		tail->data->next = tmp;		tmp->coeff = coefficient;	}}