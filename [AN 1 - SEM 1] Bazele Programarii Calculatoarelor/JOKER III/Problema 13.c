/*
/	PROBLEMA 13:
/
/	Fie un masiv bidimensional
/de numere reale, reprezentand
/consumul de carburant inregistrat
/de m masini intr-o perioada de n zile.
/Sa se scrie un program pentru determinarea
/masinilor care au inregistrat consumuri constante.
/Masivul este alocat dinamic.
/
/	(C) 2019 - OLARIU ALEXANDRU RAZVAN
*/


#include<conio.h>
#include<malloc.h>
#include<stdio.h>

void main(void)
{
	int m, n, i, j, nr = 0, ok;
	float **a;
	int *v;
	printf("Numarul de linii="); scanf_s("%d", &m);
	printf("Numarul de coloane="); scanf_s("%d", &n);
	a = (float**)malloc(m * sizeof(float));
	for (i = 0; i < m; i++)
		a[i] = (float*)malloc(n * sizeof(float));
	for(i=0;i<m;i++)
		for (j = 0; j < n; j++)
		{
			printf("a[%d][%d]=", i, j);
			scanf_s("%f", &(*(*(a + i) + j)));
		}
	printf("Matricea este \n");
	for (i = 0; i, m; i++)
	{
		for (j = 0; j < n; j++)
			printf("%5.2f", *(*(a + i) + j));
		printf("\n");
	}
	for (i = 0; i < m; i++)
	{
		ok = 0;
		for (j = 0; j < n - 1; j++)
			if ((*(*(a + i) + j)) == (*(*(a + i) + j + 1))) ok = ok + 1;
		if (ok == n - 1)nr = nr + 1;
	}
	printf("Numarul liniilor cu elementele constante este =%d", nr);
	v = (int*)malloc(nr * sizeof(int));
	int k = 0;
	for (i = 0; i < m; i++)
	{
		ok = 0;
		for (j = 0; j < n - 1; j++)
			if ((*(*(a + i) + j)) == (*(*(a + i) + j + 1))) ok = ok + 1;
		if (ok == n - 1)
		{
			*(v + k) = i;
			k = k + 1;
		}
	}
	printf("\n liniile sunt \'n");
	for (i = 0; i < m; i++)
		printf("%d", *(v + i) + 1);
	for (i = 0; i < m; i++)
		printf("%d", *(v + i) + 1);
	for (i = 0; i < m; i++)
		free((*(a + i) + j));
	free(a);
	free(v);
	_getch();
}
/*
Numarul de linii=3
Numarul de coloane=3
a[0][0]=1
a[0][1]=2
a[0][2]=3
a[1][0]=3
a[1][1]=2
a[1][2]=1
a[2][0]=2
a[2][1]=2
a[2][2]=2
Matricea este
 1.00 2.00 3.00
 3.00 2.00 1.00
 2.00 2.00 2.00
*/