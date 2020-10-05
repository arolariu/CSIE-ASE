/*
/	PROBLEMA 20:
/
/	Sa se scrie un program
/pentru a determina produsul
/vectorial dintre diagonalele
/unui masiv bidimensional.
/Masivele sunt alocate dinamic.
*/


#include<conio.h>
#include<malloc.h>
#include<stdio.h>

void main(void)
{
	float **a, *v;
	int m, n, p, i, j, k;
	printf("Dimensiunea matricei=");
	scanf_s("%d", &m);
	a = (float**)malloc(m * sizeof(float*));
	for (i = 0; i < m; i++)
		*(a + i) = (float*)malloc(m * sizeof(float));
	for(i=0;i<m;i++)
		for (j = 0; j < m; j++)
		{
			printf("a[%d][%d]=", i, j);
			scanf_s("%f", *(a + i) + j);
		}
	v = (float*)malloc(m * sizeof(float));
	for (i = 0; i < m; i++)
		*(v + i) = (*(*(a + i) + i))*(*(*(a + i)+m - i - 1));
	printf("Vectorul este: \n");
	for (i = 0; i < m; i++)
		printf("%5.2f", *(v + i));
	for (i = 0; i < m; i++)
		free(*(a + i));
	free(a);
	free(v);
	_getch();
}
/*
Dimensiunea matricei=3
a[0][0]=1
a[0][1]=2
a[0][2]=3
a[1][0]=3
a[1][1]=2
a[1][2]=1
a[2][0]=2
a[2][1]=2
a[2][2]=2
Vectorul este:
 3.00 4.00 4.00
*/