/*
/	PROBLEMA 16:
/
/	Sa se scrie un program
/pentru determinarea elementului
/minim din triunghiul de deasupra
/unei matrice patrate. (inclusiv diagonalele)
/
/	(C) 2019 - OLARIU ALEXANDRU RAZVAN
*/


#include<conio.h>
#include<malloc.h>
#include<stdio.h>

void main(void)
{
	float **a, min;
	int n, m, p, i, j, k;
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
	min = *(*(a + 0) + 0);
	for (i = 0; i <= (m - 1) / 2; i++)
		for (j = (i + 1); j <= (m - 1); j++)
			if ((*(*(a + i) + j)) < min)min = *(*(a + i) + j);
	printf("Minimul este: %5.2f", min);
	for (i = 0; i < m; i++)
		free(*(a + i));
	free(a);
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
Minimul este:  1.00
*/