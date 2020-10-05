/*
/	PROBLEMA 6:
/
/	Sa se realizeze programul
/pentru determinarea unei
/matrice la o putere data.
/
/	(C) 2019 - OLARIU ALEXANDRU RAZVAN
*/


#include <stdio.h>

void main(void)
{
	signed int n, p;
	printf("Introduceti numarul de linii/coloane a matricei patratice: ");
	scanf_s("%d", &n);
	printf("Introduceti puterea la care doriti sa aduceti matricea: ");
	scanf_s("%d", &p);
	int m[25][25];
	int r[25][25];
	int temp[25][25];

	printf("Elementele matricei:\n");
	for (signed int b = 0; b < n; b++) {
		for (signed int d = 0; d < n; d++) {
			printf("[%d][%d] = ", b + 1, d + 1);
			scanf_s("%d", &m[b][d]);
		}
	}

	// r = m
	// temp = m
	for (signed int b = 0; b < n; b++) {
		for (signed int d = 0; d < n; d++) {
			r[b][d] = m[b][d];
		}
	}

	for (signed int i = 0; i < p - 1; i++)  // p - 1 deoarece p = 1, este de fapt r 
	{                                // si contine deja result ( r ) 
		signed int sum = 0;

		// temporar = r * m
		for (signed int b = 0; b < n; b++)
		{
			for (signed int d = 0; d < n; d++)
			{
				for (signed int k = 0; k < n; k++)
				{
					sum += m[b][k] * r[k][d];
				}
				temp[b][d] = sum;
				sum = 0;
			}
		}

		// r = temporar
		for (signed int b = 0; b < n; b++) {
			for (signed int d = 0; d < n; d++) {
				r[b][d] = temp[b][d];
			}
		}
	}

	printf("REZULTAT:\n");

	for (signed int c = 0; c < n; c++)
	{
		for (signed int d = 0; d < n; d++)
		{
			printf("%d   ", r[c][d]);
		}
		printf("\n");
	}
}