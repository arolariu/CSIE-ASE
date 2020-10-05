/*
/	PROBLEMA 14:
/
/	Fie doua masive bidimensionale
/binare. Sa se scrie functia pentru
/calcularea produsului dintre cele doua
/masive.
/
/	(C) 2019 - OLARIU ALEXANDRU RAZVAN
*/


#include <stdio.h>
#include <conio.h>

void citire_mat1(float a[][10], int *m, int *n)
{
	int i, j;
	printf_s("nr de linii= "); scanf_s("%d", m);
	printf_s("nr de coloane= "); scanf_s("%d", n);
	for (i = 0; i < *m; i++)
		for (j = 0; j < *n; j++)
		{
			printf_s("a[%d][%d]= ", i, j); scanf_s("%f", &a[i][j]);
		}

}
void afisare_mat1(float a[][10], int m, int n)
{
	int i, j;
	printf_s("matricea 1 este\n");
	for (i = 0; i < m; i++)
	{
		for (j = 0; j < n; j++)
			printf_s("%5.2f;", a[i][j]); printf_s("\n");
	}
}
void citire_mat2(float b[][10], int *lb, int *p)
{
	int i, j;
	printf_s("nr de linii= "); scanf_s("%d", lb);
	printf_s("nr de coloane= "); scanf_s("%d", p);
	for (i = 0; i < *lb; i++)
		for (j = 0; j < *p; j++)
		{
			printf_s("b[%d][%d]= ", i, j); scanf_s("%f", &b[i][j]);
		}

}
void afisare_mat2(float b[][10], int lb, int p)
{
	int i, j;
	printf_s("matricea 2 este\n");
	for (i = 0; i < lb; i++)
	{
		for (j = 0; j < p; j++)
			printf_s("%5.2f;", b[i][j]); printf_s("\n");
	}
}
int produs(float a[][10], float b[][10], int m,  int n, int lb, int p, float c[][10])
{
	int i, j, k, er;
	if (n!=lb) er = 1;
	else
	{
		er = 0;
		for (i = 0; i < m; i++)
			for (j = 0; j < p; j++)
			{
				c[i][j] = 0;
				for (k = 0; k < n; k++)
					c[i][j] = c[i][j] + (a[i][k] * b[k][j]); /*daca este c[i][j] = c[i][j] || (a[i][k] && b[k][j]);*/
			}
	}
	return er;
}
void main(void)
{
	int m, n, lb, p, er, i ,j;
	float a[10][10], b[10][10], c[10][10];
	citire_mat1(a, &m, &n);
	afisare_mat1(a, m, n);
	citire_mat2(b, &lb, &p);
	afisare_mat2(b, lb, p);
	er = produs(a, b, m, n, lb, p, c);
	if (er == 1)
		printf_s("inmultirea nu este posibim");
	else
	{
		printf("matricea obtinuta este\n");
		for (i = 0; i < m; i++)
		{
			for (j = 0; j < p; j++)
				printf_s("%5.2f;", c[i][j]); printf_s("\n");
		}
	}
	_getch();
}
/*
fie doua masive bidim biare. 
sa se calc produsul dintre cele doua masive.
se insereaza:
nr de linii= 3
nr de coloane= 3
a[0][0]= 1
a[0][1]= 1
a[0][2]= 0
a[1][0]= 1
a[1][1]= 0
a[1][2]= 0
a[2][0]= 1
a[2][1]= 0
a[2][2]= 1
matricea 1 este
 1.00; 1.00; 0.00;
 1.00; 0.00; 0.00;
 1.00; 0.00; 1.00;
nr de linii= 3
nr de coloane= 2
b[0][0]= 1
b[0][1]= 0
b[1][0]= 0
b[1][1]= 1
b[2][0]= 1
b[2][1]= 1
matricea 2 este
 1.00; 0.00;
 0.00; 1.00;
 1.00; 1.00;
se afiseaza:
matricea obtinuta este
 1.00; 1.00;
 1.00; 0.00;
 2.00; 1.00;

 ** atunci matricea va fi 
 1.00; 1.00;
 1.00; 0.00;
 1.00; 1.00;
*/