#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <windows.h> 

int main() {
	//Mon code sécu : 1011259350834
	unsigned long long codeSecu;
	printf("Entrez les 13 premiers chiffres de votre code de securite sociale : ");
	scanf("%llu", &codeSecu);
	char digit = codeSecu / 1e12;
	unsigned int anneeNaissance = codeSecu / 1e10 - digit * 1e2;
	unsigned int siecle;
	printf("Entrez votre siecle de naissance (1900 ou 2000) : ");
	scanf("%d", &siecle);
	anneeNaissance += siecle;
	SYSTEMTIME Time;
	GetLocalTime(&Time);
	unsigned char age = Time.wYear - anneeNaissance;
	printf("Cette personne est un");
	if (digit == 2)
	{
		printf("e");
		if (age >= 10 && age < 19)
		{
			printf(" adolescente");
		}
		else if (age >= 19 && age < 30)
		{
			printf(" jeune femme");
		}
	}
	else
	{
		if (age >= 10 && age < 19)
		{
			printf(" adolescent");
		}
		else if (age >= 19 && age < 30)
		{
			printf(" jeune homme");
		}
	}
	if (age < 10)
	{
		printf(" enfant");
	}
	else if (age > 30)
	{
		printf(" adulte");
	}
	printf(" de %d ans.", age);
	unsigned char cleControle = 97 - codeSecu % 97;
	printf("\nCle de controle : %d", cleControle);

	return 0;
}