/*
/	PROBLEMA 2:
/
/	Sa se determine elementul
/maxim din triunghiul de deasupra
/diagonalelor unei matrici patratice.
/
/	(C) 2019 - OLARIU ALEXANDRU RAZVAN
*/

#include <stdio.h>

void main(void)
{
	int A[25][25];
	signed int numar_linie, numar_coloana, dimensiune;
	printf("Sa se introduca numarul de linii/coloane ale matricei A: ");
	scanf_s("%d", &dimensiune);
	for (numar_linie = 0; numar_linie < dimensiune; numar_linie++)
		for (numar_coloana = 0; numar_coloana < dimensiune; numar_coloana++)
		{
			printf("A[%d][%d] = ", numar_linie, numar_coloana);
			scanf_s("%d", &A[numar_linie][numar_coloana]);
		}
	signed int max = 0;
	for (numar_linie = 0; numar_linie < (dimensiune - 1) / 2; numar_linie++)
		for (numar_coloana = numar_linie + 1; numar_coloana < dimensiune - 1 - numar_linie; numar_coloana++)
			if (A[numar_linie][numar_coloana] > max)
				max = A[numar_linie][numar_coloana];
	printf("VALOAREA MAXIMA ESTE: %d", max);
}
