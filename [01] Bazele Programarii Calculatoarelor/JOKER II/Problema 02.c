/*
/	PROBLEMA 2:
/
/	Sa se realizeze programul  care
/determina elementele maxim si minim
/dintr-o matrice dreptunghiulara MxN.
/
/	(C) 2019 - OLARIU ALEXANDRU-RAZVAN
/
*/


#include <stdio.h>

void main(void)
{
	signed int linii, coloane, min = 0, max = 0;
	int A[25][25];
	printf("Sa se introduca numarul de linii ale matricei A: ");
	scanf_s("%d", &linii);
	printf("Sa se introduca numarul de coloane ale matricei A: ");
	scanf_s("%d", &coloane);
	for (signed int numar_linie = 1; numar_linie <= linii; numar_linie++)
		for (signed int numar_coloana = 1; numar_coloana <= coloane; numar_coloana++) {
			printf("Sa se introduca valoarea elementului de pe linia %d ; numar_coloana %d :", numar_linie, numar_coloana);
			printf("\n\t (adica A[%d][%d]) -> ", numar_linie, numar_coloana);
			scanf_s("%d", &A[numar_linie][numar_coloana]);
			if (A[numar_linie][numar_coloana] > max)
				max = A[numar_linie][numar_coloana];
			if (A[numar_linie][numar_coloana] < min)
				min = A[numar_linie][numar_coloana];
		}
	printf("\nMaximul este: %d ",max);
	printf("\nMinimul este: %d", min);
}