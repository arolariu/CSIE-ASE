/*
/	PROBLEMA 7:
/
/	Se da o matrice A de dimensiune mxn.
/Sa se formeze matricea B de dimensiune mxn
/cu proprietatea ca a[i][j] < j si
/(a[i][l]+a[i][n]+a[l][j]+a[m][j])/4 >= j
/
/	(C) 2019 - OLARIU ALEXANDRU RAZVAN
*/


#include <stdio.h>

void main(void)
{
	int a[10][10], b[10][10], n, m, i, j;
	scanf_s("%d", &m);
	scanf_s("%d", &n);
	for (i = 0; i < m; i++)
		for (j = 0; j < n; j++)
			scanf_s("%d", &a[i][j]);
	for (i = 0; i < m; i++)
		for (j = 0; j < n; j++)
			if (i < j) b[i][j] = a[i][j];
			else b[i][j] = (a[i][0] + a[i][n - 1] + a[0][j] + a[m - 1][j]) / 4;
	printf("Matricea rezultat este:\n");
	for (i = 0; i < m; i++)
	{
		for (j = 0; j < n; j++)
			printf("%d ", b[i][j]);
		printf("\n");
	}
}
/**
Se insereaza:
2
3
1 2 3
4 5 6
SE AFISEAZA:
Matricea rezultat este:
2 2 3
3 4 6
*/

