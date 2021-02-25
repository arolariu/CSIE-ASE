/*
/	PROBLEMA 20:
/
/	Fie o matrice de dimensiune
/mxn, reprezentand consumul de
/energie pentru fabricarea a m
/produse intr-o perioada de n zile.
/Sa se scrie functia care determina
/consumul mediu din fiecare zi.
/(nu se iau in calcul consumurile nule)
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
void consum(float a[][10], int m, int n, int v[10])
{
	int i, j, ok, p;
	for (j = 0; j < n; j++)
	{
		v[j] = 0;
		p = 0;
		for (i = 0; i < m; i++)
			if (a[i][j] != 0)
			{
				v[j] = v[j] + a[i][j];
				p = p + 1;
			}
		v[j] = v[j] / p;
	}
}

void main(void) 
{
	int m, n, i, j, v[10];
	float a[10][10];
	citire_mat(a, &m, &n);
	afisare_mat(a, m, n);
	consum(a, m, n, v);
	for (i = 0; i < n; i++)
	{
		printf_s("consumul mediu din ziua %d este: ", i);
		printf_s("%d; ", v[i]); printf_s("\n");
	}
	_getch();
}
/*
fie o matrice de dim mxn, reprez consumul de energie pt fabricarea a m produse intr-o perioada de n zile.
sa se det consumul mediu din fiecare zi(nu se iau in alcul consumurile nule).
se insereaza:
nr de linii= 3
nr de coloane= 3
a[0][0]= 1
a[0][1]= 2
a[0][2]= 3
a[1][0]= 4
a[1][1]= 5
a[1][2]= 6
a[2][0]= 1
a[2][1]= 2
a[2][2]= 6
matricea este
 1.00; 2.00; 3.00;
 4.00; 5.00; 6.00;
 1.00; 2.00; 6.00;
se afiseaza:
consumul mediu din ziua 0 este: 2;
consumul mediu din ziua 1 este: 3;
consumul mediu din ziua 2 este: 5;
*/