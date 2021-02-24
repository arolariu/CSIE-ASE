/*
/	PROBLEMA 3
/
/	Sa se scrie programul care realizeaza
/determinarea elementului maxim de pe
/fiecare numar_linie si a elementului maxim
/final dintr-o matrice de tip MxN.
/
/	(C) 2019 - OLARIU ALEXANDRU RAZVAN
*/


#include <stdio.h>

void main(void)
{
	signed int numar_linie, linii, numar_coloana, coloane, max_numar_linie = 0, max = 0;
	int A[25][25];
	printf("Sa se introduca numarul de linii ale matricei A: ");
	scanf_s("%d", &linii);
	printf("Sa se introduca numarul de coloane ale matricei A: ");
	scanf_s("%d", &coloane);
	for (numar_linie = 1; numar_linie <= linii; numar_linie++){
		for (numar_coloana = 1; numar_coloana <= coloane; numar_coloana++) {
			printf("Sa se introduca valoarea elementului de pe linia %d ; numar_coloana %d :", numar_linie, numar_coloana);
			printf("\n\t (adica A[%d][%d]) -> ", numar_linie, numar_coloana);
			scanf_s("%d", &A[numar_linie][numar_coloana]);
			if (A[numar_linie][numar_coloana] > max)
				max = A[numar_linie][numar_coloana]; // MAXIM PER MATRIX
			if (A[numar_linie][numar_coloana] > max_numar_linie)
				max_numar_linie = A[numar_linie][numar_coloana];
		}
	printf("\n\tMaximul de pe linia %d este %d\n\t", numar_linie, max_numar_linie);
	max_numar_linie = 0;
	}
	printf("\nMaximul pe toata matricea este egal cu %d ", max);
}