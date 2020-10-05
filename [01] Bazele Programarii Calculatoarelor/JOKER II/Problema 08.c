/*
/	PROBLEMA 8:
/
/	Sa se realizeze programul
/care sorteaza elementele
/unei matrici de tip NxM
/in ordine crescatoare.
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
	printf("\n\tMATRICEA NEORDONATA ARATA ASA:\n");
	for (numar_linie = 0; numar_linie < linii; numar_linie++)
	{
		for (numar_coloana = 0; numar_coloana < coloane; numar_coloana++)
			printf("  %d  ", A[numar_linie][numar_coloana]); printf("\n");
	}
	signed int temporar, K = 0;
	signed int Temp[100];
	for (numar_linie = 0; numar_linie < linii; numar_linie++)
		for (numar_coloana = 0; numar_coloana < coloane; numar_coloana++)
		{
			Temp[K] = A[numar_linie][numar_coloana];
			K++;
		}
	// parcurgerea finala =>
	for(numar_linie=0;numar_linie<K;numar_linie++)
		for(numar_coloana=0;numar_coloana<K;numar_coloana++)
			//Ordonarea:
			if (Temp[numar_linie] > Temp[numar_coloana]) {
				temporar = Temp[numar_linie];
				Temp[numar_linie] = Temp[numar_coloana];
				Temp[numar_coloana] = temporar;
			}
	/*for (numar_linie = 0; numar_linie < K; numar_linie++)
		printf("%d", Temp[numar_linie]);   => SECVENTA DE VERIFICARE LA SORTARE.*/
	printf("\n\tMATRICEA ORDONATA ARATA ASA:\n");
	for (numar_linie = 0; numar_linie < K; numar_linie++) {
		printf("  %d  ", Temp[numar_linie]);
		if (numar_linie == coloane-1 || numar_linie == 2*coloane-1)
			printf("\n"); // SEPARATOR PENTRU 3x3 . PENTRU mai mare trebuie FUNCTIE.
		// ASA CA VOM LUCRA CU 3x3.
	}
}