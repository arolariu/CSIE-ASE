/*
/	PROBLEMA 11:
/
/	Sa se realizeze programul care verifica
/daca o matrice este triunghiulara inferior
/In caz afirmativ, sa fie transformata in
/Matrice triunghiulara superior. !!!
/
/	(C) 2019 - OLARIU ALEXANDRU RAZVAN
*/


#include <stdio.h>

void main(void)
{
	signed int numar_linie, numar_coloana, dimensiune, temp, A[25][25];
	printf("Dimensiunea matricii A: "); scanf_s("%d", &dimensiune);
	for (numar_linie = 0; numar_linie < dimensiune; numar_linie++)
		for (numar_coloana = 0; numar_coloana < dimensiune; numar_coloana++)
		{
			printf("A[%d][%d] = ", numar_linie, numar_coloana);
			scanf_s("%d", &A[numar_linie][numar_coloana]);
		}
	/*for (numar_linie = 0; numar_linie < dimensiune; numar_linie++)
	{
		for (numar_coloana = 0; numar_coloana < dimensiune; numar_coloana++)
			printf("%d", A[numar_linie][numar_coloana]);
		printf("\n");
	}*/
	int OK = 0;
	for (numar_linie = 0; numar_linie < dimensiune - 1; numar_linie++)
		for (numar_coloana = numar_linie + 1; numar_coloana < dimensiune; numar_coloana++)
			if (A[numar_linie][numar_coloana] != 0)
				OK = 1;
	if (!OK)
	{
		for (numar_linie = 1; numar_linie < dimensiune; numar_linie++)
			for (numar_coloana = 0; numar_coloana < numar_linie; numar_coloana++)
			{
				temp = A[numar_linie][numar_coloana];
				A[numar_coloana][numar_linie] = A[numar_linie][numar_coloana];
				A[numar_linie][numar_coloana] = temp;
			}
		printf("\nMATRICEA FINALA ARATA ASA:\n");
		for (numar_linie = 0; numar_linie < dimensiune; numar_linie++)
		{
			for (numar_coloana = 0; numar_coloana < dimensiune; numar_coloana++)
				printf("%d", A[numar_linie][numar_coloana]);
			printf("\n");
		}
	} // SA FACUT MATRICEA FINALA , DACA NU, INSEAMNA CA NU EXISTA SAU NU ARE TRIUNGHI INFERIOR.
	else
		printf("Matricea nu are un trhiunghi inferior.");
	printf("\n");
}