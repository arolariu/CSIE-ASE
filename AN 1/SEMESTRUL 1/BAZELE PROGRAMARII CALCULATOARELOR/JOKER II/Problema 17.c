/*
/	PROBLEMA 17:
/
/	Sa se determine daca o
/matrice patratica are
/puncte sa. 
/
/	(C) 2019 - OLARIU ALEXANDRU RAZVAN
*/

#include <stdio.h>

void main(void)
{
	int A[25][25];
	signed int numar_linie, linii, numar_coloana, coloane, minim = 0, column = 0;
	printf("Sa se introduca numarul de linii ale matricei A: ");
	scanf_s("%d", &linii);
	printf("Sa se introduca numarul de coloane ale matricei A: ");
	scanf_s("%d", &coloane);
	for (numar_linie = 0; numar_linie < linii; numar_linie++)
		for (numar_coloana = 0; numar_coloana < coloane; numar_coloana++)
		{
			printf("A[%d][%d] = ", numar_linie, numar_coloana);
			scanf_s("%d", &A[numar_linie][numar_coloana]);
		}
	int OK = 0, OK2 = 0;
	for (numar_linie = 0; numar_linie < linii; numar_linie++)
		minim = A[numar_linie][numar_coloana];
	column = 0;
	OK = 1;
	for (numar_coloana = 1; numar_coloana < linii; numar_coloana++)
		if (A[numar_linie][numar_coloana] < minim) {
			minim = A[numar_linie][numar_coloana];
			column = numar_coloana;
		}
	for (numar_coloana = 0; numar_coloana < coloane; numar_coloana++)
		if (A[numar_coloana][column] > minim)
			OK = 0;
	if (OK)
	{
		printf("ESTE UN PUNCT SA A[%d][%d] = %d \n", linii + 1, column + 1, minim);
		OK2 = 1;
	}
	if (!OK2)
		printf("Matricea NU ARE PUNCTE SA.");
}