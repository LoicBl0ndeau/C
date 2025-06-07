#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

int main() {
    int valid = 1;
    int note = 0;
    int sum = 0;
    int nbNotes = 0;
    while (valid) {
        if (note == -1) {
            valid = 0;
            nbNotes--;
            printf("%f", (float)sum / nbNotes);
        }
        else {
            sum += note;
            nbNotes++;
            printf("\nEntrez une note : ");
            scanf("%d", &note);
        }
    }
}
