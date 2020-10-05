/*
/	PROBLEMA 17:
/
/	Sa se scrie un program
/pentru determinarea elementului
/minim din triunghiul de sub diagonalele
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
	printf("Dimensiunea matricii=");
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
	min = *(*(m + a - 1) + 0);
	for (i = m / 2; i <= m - 1; i++)
		for (j = m - i - 1; j <= i; j++)
			if ((*(*(a + i) + j)) < min)
				min = *(*(a + i) + j);
	printf("Minimul este: %5.2f", min);
	for (i = 0; i < m; i++)
		free(*(a + i));
	free(a);
	_getch();
}
/*
Dimensiunea matricii=3
a[0][0]=1
a[0][1]=2
a[0][2]=3
a[1][0]=3
a[1][1]=2
a[1][2]=1
a[2][0]=2
a[2][1]=2
a[2][2]=2
Minimul este:  2.00
*/