/*
/	PROBLEMA 5:
/
/	Sa se scrie programul care realizeaza 
/inmultirea a doua matrice dreptunghiulare
/cu elemente reale de diminesiuni
/MxP respectiv NxP.
/
/	(C) 2019 - OLARIU ALEXANDRU RAZVAN
*/


#include  <stdio.h>

void main(void)
{
	signed int m, n, p, q, c, d, k, sum = 0;
	int first[10][10], second[10][10], multiply[10][10];
	printf("Introduceti numarul de linii si coloane a matricei A: \n");
	scanf_s("%d%d", &m, &n);
	printf("Introduceti elementele matricei A: \n");
	for (c = 0; c < m; c++)
		for (d = 0; d < n; d++)
			scanf_s("%d", &first[c][d]);
	printf("Introduceti numarul de linii si coloane a matricei B: \n");
	scanf_s("%d%d", &p, &q);

	if (n != p)
		printf("Matricile nu se pot inmulti intre ele \n");
	else
	{
		printf("Introduceti elementele matricei B: \n");
		for (c = 0; c < p; c++)
			for (d = 0; d < q; d++)
				scanf_s("%d", &second[c][d]);
		for (c = 0; c < m; c++) {
			for (d = 0; d < q; d++) {
				for (k = 0; k < p; k++) {
					sum = sum + first[c][k] * second[k][d];
				}

				multiply[c][d] = sum;
				sum = 0;
			}
		}
		printf("PRODUSUL MATRICILOR ESTE EGAL CU : \n");
		for (c = 0; c < m; c++) {
			for (d = 0; d < q; d++)
				printf("%d\t", multiply[c][d]);

			printf("\n");
		}
	}
}