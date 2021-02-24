/*
/	PROBLEMA 9:
/
/	Sa se verifice daca
/Matricea A de ordinul n
/este un patrat magic.
/
/	(C) 2019 - OLARIU ALEXANDRU RAZVAN
*/


#include <stdio.h>

void main(void)
{
	int A[25][25];
	signed int numar_linie, linii, numar_coloana, coloane;
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
	signed int suma_diagonala_principala = 0;
	signed int suma_diagonala_secundara = 0;
	for (numar_linie = 0; numar_linie < linii; numar_linie++)
	{
		suma_diagonala_principala += A[numar_linie][numar_linie];
		suma_diagonala_secundara += A[numar_linie][linii - numar_linie - 1];

	}
	if (suma_diagonala_principala == suma_diagonala_secundara)
		printf("Suma DP este egala cu suma DS!!!!");
}