/*
/	PROBLEMA 4:
/
/	Sa se scrie programul care realizeaza
/determinarea pozitiei primei aparitii
/a unei valori date de la tastatura
/intr-o matrice de tip MxN.
/
/	(C) 2019 - OLARIU ALEXANDRU RAZVAN
*/


#include <stdio.h>

void main(void)
{
	signed int valoare, numar_linie, linii, numar_coloana, coloane, max_numar_linie = 0, max = 0;
	int A[25][25];
	printf("Sa se introduca numarul de linii ale matricei A: ");
	scanf_s("%d", &linii);
	printf("Sa se introduca numarul de coloane ale matricei A: ");
	scanf_s("%d", &coloane);
	for (numar_linie = 1; numar_linie <= linii; numar_linie++) {
		for (numar_coloana = 1; numar_coloana <= coloane; numar_coloana++) {
			printf("Sa se introduca valoarea elementului de pe linia %d ; numar_coloana %d :", numar_linie, numar_coloana);
			printf("\n\t (adica A[%d][%d]) -> ", numar_linie, numar_coloana);
			scanf_s("%d", &A[numar_linie][numar_coloana]);
		}
	}
	printf("Sa se introduca valoarea cautata din matricea A:");
	scanf_s("%d", &valoare);
	for (numar_linie = 1; numar_linie <= linii; numar_linie++) 
		for (numar_coloana = 1; numar_coloana <= coloane; numar_coloana++) {
			if (A[numar_linie][numar_coloana] == valoare)
				printf("S-a gasit valoarea %d pe linia %d numar_coloana %d", valoare, numar_linie, numar_coloana);
			else
				printf("Nu s-a gasit valoarea data.");
			break;
		}
}