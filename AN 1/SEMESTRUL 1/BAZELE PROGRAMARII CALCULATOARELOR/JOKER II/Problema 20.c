/*
/	PROBLEMA 20:
/
/	Sa se realizeze programul
/care determina coloanele
/unei matrice care au elementele
/in progresie aritmetica.
/
/	(C) 2019 - OLARIU ALEXANDRU RAZVAN
*/


#include <stdio.h>

void main(void)
{
	int i, j, m, n, a[20][20], r1, gasit;
	scanf_s("%d", &m);
	scanf_s("%d", &n);
	for (i = 0; i < m; i++)
		for (j = 0; j < n; j++)
			scanf_s("%d", &a[i][j]);
	gasit = 0;
	for (j = 0; j < n; j++)
	{
		r1 = a[1][j] - a[0][j];
		for (i = 1; i < m && a[i][j] - a[i - 1][j] == r1; i++);
		if (i == m)
		{
			printf("Coloana: %d", j + 1); gasit = 1;
			for (i = 0; i < m; i++)
				printf("%d ", a[i][j]);
			printf("este in progresie aritmetica\n");
		}
	}
	if (!gasit)
		printf("Nu exista coloane care au elemente in progresie aritmetica!");
}

/*
Se insereaza:
4
4
1 2 3 4
5 6 7 8
9 10 11 12
13 14 12 13
SE AFISEAZA:
Coloana: 1 5 9 13 este in progresie aritmetica
Coloana: 2 6 10 14 este in progresie aritmetica
*/
