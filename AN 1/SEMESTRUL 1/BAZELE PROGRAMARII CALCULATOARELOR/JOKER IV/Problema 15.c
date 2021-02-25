/*
/	PROBLEMA 15:
/
/	Fie o matrice patratica
/de numere reale. Sa se scrie
/functia pentru ridicarea la
/puterea p a matricei.
/
/	(C) 2019 - OLARIU ALEXANDRU RAZVAN
*/


#include <stdio.h>
#include <conio.h>

void citire_mat(float a[][10], int *m)
{
	int i, j;
	printf_s("nr de linii/coloane= "); scanf_s("%d", m);
	for (i = 0; i < *m; i++)
		for (j = 0; j < *m; j++)
		{
			printf_s("a[%d][%d]= ", i, j); scanf_s("%f", &a[i][j]);
		}

}
void afisare_mat(float a[][10], int m)
{
	int i, j;
	printf_s("matricea este\n");
	for (i = 0; i < m; i++)
	{
		for (j = 0; j < m; j++)
			printf_s("%5.2f;", a[i][j]); printf_s("\n");
	}
}
void putere(float a[][10], int m, int p, float b[][10])
{
	int i, j, k, l;
	float c[10][10];
	for (i = 0; i < m; i++)
		for (j = 0; j < m; j++)
			if (i == j) b[i][j] = 1;
			else b[i][j] = 0;
	for (l = 0; l < p; l++)
	{
		for (i = 0; i < m; i++)
			for (j = 0; j < m; j++)
			{
				c[i][j] = 0;
				for (k = 0; k < m; k++)
					c[i][j] = c[i][j] + (a[i][k] * b[k][j]);

			}
		for (i = 0; i < m; i++)
			for (j = 0; j < m; j++)
				b[i][j] = c[i][j];
	}
}
void main(void)
{
	int m, p, i, j;
	float a[10][10], b[10][10];
	citire_mat(a, &m);
	afisare_mat(a, m);
	printf_s("puterea este= "); scanf_s("%d", &p); printf_s("\n");
	putere(a, m, p, b);
	printf_s("matricea obtinuta este\n");
		for (i = 0; i < m; i++)
		{
			for (j = 0; j < m; j++)
				printf_s("%5.2f;", b[i][j]); printf_s("\n");
		}
		_getch();
}
/*
fie o matrice patrarica de nr reale.
sa se realizeze ridicarea la puterea p a matricei.
se insereaza:
nr de linii/coloane= 3
a[0][0]= 1
a[0][1]= 1
a[0][2]= 1
a[1][0]= 1
a[1][1]= 1
a[1][2]= 1
a[2][0]= 1
a[2][1]= 1
a[2][2]= 1
matricea este
 1.00; 1.00; 1.00;
 1.00; 1.00; 1.00;
 1.00; 1.00; 1.00;
puterea este= 2
se afiseaza:
matricea obtinuta este
 3.00; 3.00; 3.00;
 3.00; 3.00; 3.00;
 3.00; 3.00; 3.00;
*/