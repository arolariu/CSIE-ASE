/*
/	PROBLEMA 18:
/
/	Fie o matrice de dimensiune
/mxn, reprezentand consumul de
/energie pentru fabricarea a m
/produse intr-o pedioada de n zile.
/Sa se scrie functia care determina
/produsele care au inregistrat
/consumuri descrescatoare pe intreaga
/perioada.
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
int descresctor(float a[][10], int m, int n, int v[10])
{
	int i, j, ok, nr = 0;
	float r;
	for (i = 0; i < m; i++)
	{
		ok = 1;
		for (j = 0; j < n - 1; j++)
			if (a[i][j + 1] >a[i][j] ) ok = 0;
		if (ok == 1)
		{
			v[nr] = i;
			nr = nr + 1;
		}
	}
	return nr;
}

void main(void)
{
	int m, n, i, j, nr, v[10];
	float a[10][10];
	citire_mat(a, &m, &n);
	afisare_mat(a, m, n);
	nr = descresctor(a, m, n, v);
	printf_s("produsele care au intregistrat consumuri descresctoare sunt: ");
	for (i = 0; i < nr; i++)
		printf_s("%d; ", v[i]);

	_getch();
}
/*
fie o matrice de dim mxn, reprez consumul de energie pt fabricarea a m produse intr-o perioada de n zile.
sa se det produsele care au inregistrat consumuri in descrescatoare pe intreaga perioada.
se insereaza:
nr de linii= 3
nr de coloane= 3
a[0][0]= 6
a[0][1]= 0
a[0][2]= 9
a[1][0]= 3
a[1][1]= 2
a[1][2]= 1
a[2][0]= 9
a[2][1]= 8
a[2][2]= 7
matricea este
 6.00; 0.00; 9.00;
 3.00; 2.00; 1.00;
 9.00; 8.00; 7.00;
se afiseaza:
produsele care au intregistrat consumuri descresctoare sunt: 1; 2;
*/