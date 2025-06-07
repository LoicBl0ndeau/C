#include <stdio.h>
#include <stdlib.h>
int minimum(int tab[]);

int main() {
	int tab[8] = { 1, 99, 12, 42, 123, -5, -82, -19 };
	printf("%d", minimum(tab));
	return EXIT_SUCCESS;
}

int minimum(int tab[]) {
	int mini = tab[0];
	for (int i = 1; i < 8; i++)
	{
		if (mini > tab[i]) {
			mini = tab[i];
		}
	}

	return mini;
}