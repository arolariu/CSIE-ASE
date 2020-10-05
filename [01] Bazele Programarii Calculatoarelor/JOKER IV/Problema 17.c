/*
/	PROBLEMA 17:
/
/	Fie o matrice de dimensiune
/mxn reprezentand consumul de
/energie pentru fabricarea a m
/produse intr-o perioada de n zile.
/Sa se scrie functia care determina
/produsele care au inregistrat
/consumuri in progresie aritmetica
/pe intreaga perioada.
/
/	(C) 2019 - OLARIU ALEXANDRU RAZVAN
*/


#include <stdio.h>
#include <conio.h>

void citire_mat(float a[][10], int *m, int *n) {
	int i, j;
	printf_s("nr de linii= "); scanf_s("%d", m);
	printf_s("nr de coloane= "); scanf_s("%d", n);
	for (i = 0; i < *m; i++)
		for (j = 0; j < *n; j++) {
			printf_s("a[%d][%d]= ", i, j); scanf_s("%f", &a[i][j]);
		}

}
void afisare_mat(float a[][10], int m, int n) {
	int i, j;
	printf_s("matricea este\n");
	for (i = 0; i < m; i++)
	{
		for (j = 0; j < n; j++)
			printf_s("%5.2f;", a[i][j]); printf_s("\n");
	}
}
int prog(float a[][10], int m, int n, int v[10])
{
	int i, j, ok, nr=0;
	float r;
	for (i = 0; i < m; i++) {
		ok = 1;
		r = a[i][1] - a[i][0];
		for (j = 0; j < n - 1; j++)
			if (a[i][j + 1] - a[i][j] != r) ok = 0;
		if (ok == 1)
		{
			v[nr] = i;
			nr=nr+1;
		}
	}
	return nr;
}

void main()
{
	int m, n, i, j, nr, v[10];
	float a[10][10];
	citire_mat(a, &m, &n);
	afisare_mat(a, m, n);
	nr=prog(a, m, n, v);
	printf_s("produsele care au intregistrat consumuri in prog aritm sunt: ");
	for (i = 0; i < nr; i++) 
			printf_s("%d; ", v[i]); 

	_getch();
}
/*
fie o matrice de dim mxn, reprez consumul de energie pt fabricarea a m produse intr-o perioada de n zile.
sa se det produsele care au inregistrat consumuri in progresie aritmetica pe intreaga perioada.
se insereaza:
nr de linii= 3
nr de coloane= 3
a[0][0]= 3
a[0][1]= 6
a[0][2]= 9
a[1][0]= 24
a[1][1]= 0
a[1][2]= 4
a[2][0]= 3
a[2][1]= 5
a[2][2]= 7
matricea este
 3.00; 6.00; 9.00;
24.00; 0.00; 4.00;
 3.00; 5.00; 7.00;
se afiseaza:
produsele care au intregistrat consumuri in prog aritm sunt: 0; 2;
*/