/*
/	PROBLEMA 16:
/
/	Fie un masiv bidimensional
/de numere reale. Sa se scrie
/functia pentru ordonarea crescatoare
/a valorilor aflate pe liniile acesteia.
/
/	(C) 2019 - OLARIU ALEXANDRU RAZVAN
*/


#include <stdio.h>
#include <conio.h>

void citire_mat(float a[][10], int *m, int *n)
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
void afisare_mat(float a[][10], int m, int n)
{
	int i, j;
	printf_s("matricea este\n");
	for (i = 0; i < m; i++)
	{
		for (j = 0; j < n; j++)
			printf_s("%5.2f;", a[i][j]); printf_s("\n");
	}
}
void ord_linii(float a[][10], int m, int n)
{
	int i, j, k;
	for (i = 0; i < m; i++)
		for (j = 0; j < n - 1; j++)
			for (k = j + 1; k < n; k++)
				if (a[i][j] > a[i][k])
				{
					float aux = a[i][j];
					a[i][j] = a[i][k];
					a[i][k] = aux;
				}
}
		
void main(void)
{
	int m, n, i, j;
	float a[10][10];
	citire_mat(a, &m,&n);
	afisare_mat(a, m, n);
	ord_linii(a, m, n);
	printf_s("matricea obtinuta este\n");
	for (i = 0; i < m; i++) {
		for (j = 0; j < n; j++)
			printf_s("%5.2f;", a[i][j]); printf_s("\n");
	}
	_getch();
}
/*
fie un masiv bidim de nr reale.
sa se ordoneze cresc val aflate pe liniile acesteia.
se insereaza:
nr de linii= 3
nr de coloane= 3
a[0][0]= 2
a[0][1]= 9
a[0][2]= 3
a[1][0]= 7
a[1][1]= 0
a[1][2]= 4
a[2][0]= 5
a[2][1]= 1
a[2][2]= 2
matricea este
 2.00; 9.00; 3.00;
 7.00; 0.00; 4.00;
 5.00; 1.00; 2.00;
se afiseaza:
matricea obtinuta este
 2.00; 3.00; 9.00;
 0.00; 4.00; 7.00;
 1.00; 2.00; 5.00;
*/