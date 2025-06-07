#include <stdio.h>
#include <stdlib.h>
#define TABSIZE 10
int position(int tab[TABSIZE], int debut, int fin, int val);

int main() {
	int tab[TABSIZE];
	for (int i = 0; i < TABSIZE; i++)
	{
		tab[i] = i + 1;
	}
	for (int i = 0; i < TABSIZE; i++)
	{
		printf("%d\n", position(tab, 0, TABSIZE - 1, i));
	}

	return EXIT_SUCCESS;
}

int position(int tab[TABSIZE], int debut, int fin, int val) {
	int pos = (debut + fin) / 2;
	if (tab[pos] == val) {
		return pos;
	}
	else if (debut == fin) {
		return -1;
	}
	else if(tab[pos] < val){
		return position(tab, pos, fin, val);
	}
	else {
		return position(tab, debut, pos, val);
	}
}