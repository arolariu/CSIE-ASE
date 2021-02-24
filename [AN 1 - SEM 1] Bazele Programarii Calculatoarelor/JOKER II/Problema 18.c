/*
/	PROBLEMA 18:
/
/	Sa se realizeze programul pentru
/determinarea produsului vectorial 
/dintre fiecare doua linii ale unei
/matrici dreptunghiulare.
/
/	(C) 2019 - OLARIU ALEXANDRU RAZVAN
*/


#include<stdio.h>

void main(void)
{
	int a[10][20], nr, vect[45][20];
	int i, j, m, n, k;
	scanf_s("%d", &m);
	scanf_s("%d", &n);
	for (i = 0; i < m; i++)
		for (j = 0; j < n; j++)
			scanf_s("%d", &a[i][j]);
	nr = 0;
	for (i = 0; i < m - 1; i++)
		for (j = i + 1; j < m; j++)
		{
			for (k = 0; k < n; k++)
				vect[nr][k] = a[i][k] * a[j][k];
			nr++;
		}
	printf("\nMatricea care contine produsele vectoriale este:\n");
	for (i = 0; i < nr; i++)
	{
		for (j = 0; j < n; j++);
		printf("%d", vect[i][j]);
		printf("\n");
	}
}
/**
Se insereza:
1
2
2 5
SE AFISEAZA:
Matricea care contine produsele vectoriale este:
*/
