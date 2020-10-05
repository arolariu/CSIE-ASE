/*
/	PROBLEMA 5:
/
/	Pentru fiecare linie a unei matrice
/de tip NxM sa se scada din elementele
/sale valoarea minima din acea linie.
/
/	(C) 2019 - OLARIU ALEXANDRU RAZVAN
*/


#include <stdio.h>

void main(void)
{
	float a[10][10], min;
	int n, m, i, j;
	scanf_s("%d", &m);
	scanf_s("%d", &n);
	for (i = 0; i < n; i++)
		for (j = 0; j < m; j++)
			scanf_s("%f", &a[i][j]);
	for (i = 0; i < n; i++)
	{
		min = a[i][0];
		for (j = 1; j < m; j++)
			if (a[i][j] < min)
				min = a[i][j];
		for (j = 0; j < m; j++)
			a[i][j] = a[i][j] - min;
	}
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < m; j++)
			printf("%3.2f ", a[i][j]);
		printf("\n");
	}
}
/*
Se insereaza:
3
3
1 2 3
4 8 9
5 10 15
SE AFISEAZA:
0.00 1.00 2.00
0.00 4.00 5.00
0.00 5.00 10.00
*/
