/*
/	PROBLEMA 15:
/
/	Fie un masiv unidimensional
/reprezentand preturile pentru fiecare
/din cele n tipuri de flori si un masiv
/bidimensional de numere reale reprezentand
/cantitatea vanduta pentru fiecare tip in cele n
/zile. Sa se scrie un program pentru a calcula
/valoarea vanzarilor pentru fiecare tip de floare.
/Masivele sunt alocate dinamic.
/
/	(C) 2019 - OLARIU ALEXANDRU RAZVAN
*/


#include<conio.h>
#include<malloc.h>
#include<stdio.h>

void main(void)
{
	float **a, *b, *c;
	int m, n, p, i, j, k;
	printf("Numarul de linii=");
	scanf_s("%d", &m);
	printf("Numarul de coloane=");
	scanf_s("%d", &n);
	a = (float**)malloc(m * sizeof(float*));
	for (i = 0; i < m; i++)
		a[i] = (float*)malloc(n * sizeof(float));
	for(i=0;i<m;i++)
		for (j = 0; j < n; j++)
		{
			printf("a[%d][%d]=", i, j);
			scanf_s("%f", &(*(*(a + i) + j)));
		}
	printf("Inserati p=");
	scanf_s("%d", &p);
	b = (float*)malloc(p * sizeof(float));
	for (i = 0; i < p; i++)
	{
		printf("b[%d]=", i);
		scanf_s("%f", &(*(b + i)));
	}
	if (p == m)
	{
		c = (float*)malloc(n * sizeof(float));
		for (i = 0; i < n; i++)
			*(c + i) = 0;
		for (i = 0; i < n; i++)
			for (k = 0; k < m; k++)
				*(c + i) = *(c + i) + (*(b + k))*(*(*(a + k) + i));
		for (i = 0; i < n; i++)
			printf("c[%d]=%f \n", i, *(c + i));
		free(c);
	}
	else
		printf("Nu avem aceeasi dimensiune");
	free(b);
	for (i = 0; i < m; i++)
		free(*(a + i));
	free(a);
	_getch();
}
/*Numarul de linii=3
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
Inserati p=3
b[0]=1
b[1]=2
b[2]=3
c[0]=13.000000
c[1]=12.000000
c[2]=11.000000
*/