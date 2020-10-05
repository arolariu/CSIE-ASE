/*
/	PROBLEMA 1:
/
/
/	Sa se realizeze programul care calculeaza suma 
/elementelor unei matrice dreptunghiulare de dimensiune MxN.
/Elementele matricei se vor citi de la tastatura.
/
/	(C) 2019 - OLARIU ALEXANDRU RAZVAN
*/


#include <stdio.h>

void main(void)
{
	signed int linii, coloane, sum = 0;
	int A[50][50];
	printf("Sa se introduca numarul de linii ale matricei A: ");
	scanf_s("%d", &linii);
	printf("Sa se introduca numarul de coloane ale matricei A: ");
	scanf_s("%d", &coloane);
	for (signed int numar_linie = 1; numar_linie <= linii; numar_linie++) 
		for (int numar_coloana = 1; numar_coloana <= coloane; numar_coloana++) {
			printf("Sa se introduca valoarea elementului de pe linia %d ; numar_coloana %d :", numar_linie, numar_coloana);
			printf("\n\t (adica A[%d][%d]) -> ", numar_linie, numar_coloana);
			scanf_s("%d", &A[numar_linie][numar_coloana]);
			sum += A[numar_linie][numar_coloana];
		}
	printf("Suma elementelor este : %d", sum);
}