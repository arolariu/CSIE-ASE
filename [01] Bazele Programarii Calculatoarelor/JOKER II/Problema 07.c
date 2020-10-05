/*
/	PROBLEMA 7:
/
/	Sa se realizeze programul care
/efectueaza inmultirea dintre
/un vector si o matrice.
/
/	(C) 2019 - OLARIU ALEXANDRU RAZVAN
*/


#include <stdio.h>

void main(void)
{
	signed int K,element, numar_linie, numar_coloana, dimensiune_matrice;
	int A[10][10], X[10], Y[10];
	printf("Introduceti numarul de elemente ale vectorului X:");
	scanf_s("%d", &numar_linie);
	for (element = 0; element < numar_linie; element++)
	{
		printf("X[%d] = ", element);
		scanf_s("%d", &X[element]);
	}
	printf("Matricea A are dimensiunea de:");
	scanf_s("%d", &dimensiune_matrice);
	for (numar_coloana = 0; numar_coloana < numar_linie; numar_coloana++)
		for (element = 0; element < dimensiune_matrice; element++) {
			printf("A[%d][%d] = ", numar_coloana, element);
			scanf_s("%d", &A[numar_coloana][element]);
		}
	for (element = 0; element < dimensiune_matrice; element++) {
		Y[element] = 0;
		for (K = 0; K < numar_linie; K++)
			Y[element] = Y[element] + X[K] * A[K][element];
	}
	printf("\n\t\tREZULTAT FINAL:\n");
	for (element = 0; element < dimensiune_matrice; element++)
		printf("  %d  ", Y[element]);
		printf("\n");
}

/* 
IN: A de tip 3x4 cu 1 2 3 | 3 4 5 | 7 8 9 | 0 0 0 
OUT: A de tip 4x3 cu 0 0 0 | 7 8 9 | 3 4 5 | 1 2 3 
*/