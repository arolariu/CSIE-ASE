/*
/	PROBLEMA 14:
/
/	Fie un masiv bidimensional
/de numere reale, reprezentand
/cantitatea vanduta de m firme din
/cele n tipuri de carburant si un masiv
/unidimensional reprezentand preturile pe
/fiecare tip de carburant.
/Sa se scrie un program pentru a calcula
/valoarea vanzarilor pentru fiecare firma.
/Masivele sunt alocate dinamic.
/
/	(C) 2019 - OLARIU ALEXANDRU RAZVAN
*/


#include<conio.h>
#include<malloc.h>
#include<stdio.h>

void main(void)
{
	float**a, *b, *c;
	int n, m, p, i, j, k;
	printf("Numarul de linii="); scanf_s("%d", &m);
	printf("Numarul de coloane="); scanf_s("%d", &n);
	a = (float**)malloc(m * sizeof(float*));
	for (i = 0; i < m; i++)
		a[i] = (float*)malloc(n * sizeof(float*));
	for(i=0;i<m;i++)
		for (j = 0; j < n; j++)
		{
			printf("a[%d][%d]=", i, j);
			scanf_s("%f", &(*(*(a + i)+j)));

		}
	b = (float*)malloc(n * sizeof(float));
	for (i = 0; i < n; i++)
	{
		printf("b[%d]=", i);
		scanf_s("%f", &(*(b + i)));
	}
	c = (float*)malloc(m * sizeof(float));
	for (i = 0; i < m; i++)
		*(c + i) = 0;
	for (i = 0; i < m; i++)
		for (k = 0; k < n; k++)
			*(c + i) = *(c + i) + (*(*(a + i) + k))*(*(b + k));
	for (i = 0; i < m; i++)
		printf("c[%d]=%f\n", i, *(c + i));
	free(c);
	free(b);
	for (i = 0; i < m; i++)
		free(*(a + i));
	free(a);
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
b[0]=2
b[1]=3
b[2]=1
c[0]=11.000000
c[1]=13.000000
c[2]=12.000000
*/