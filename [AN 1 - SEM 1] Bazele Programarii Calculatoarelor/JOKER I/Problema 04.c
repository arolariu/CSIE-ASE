/*
/	PROBLEMA 4:
/
/	Sa se sorteze prima linie
/a unei matrice de tip NxM
/fara a schimba structura coloanelor.
/
/	(C) 2019 - OLARIU ALEXANDRU RAZVAN
*/


#include<stdio.h>

void main(void)
{
	float a[10][10], aux;
	int n, m, i, j, k;
	scanf_s("%d", &m);
	scanf_s("%d", &n);
	for (i = 0; i < n; i++)
		for (j = 0; j < m; j++)
			scanf_s("%d", &a[i][j]);
	k = 1;
	while (k)
	{
		k = 0;
		for (i = 0; i < n - 1; i++)
			if (a[0][i] > a[0][i + 1])
				for (j = 0; j < m; j++)
				{
					aux = a[i][j];
					a[j][i] = a[j][i + 1];
					a[j][i + 1] = aux;
					k = 1;
				}
	}
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < m; j++)
			printf("%3.2f ", a[i][j]);
		printf("\n");
	}
}

/**
Se insereaza:
3
3
3 2 1
6 5 4
9 8 7
SE AFISEAZA:
1.00 2.00 3.00
4.00 5.00 6.00
7.00 8.00 9.00
*/
