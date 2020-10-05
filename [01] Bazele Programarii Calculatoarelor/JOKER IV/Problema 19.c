/*
/	PROBLEMA 19:
/
/	Fie o matrice de dimensiune
/mxn, reprezentand consumul de energie
/pentru fabricarea a m produse intr-o
/perioada de n zile. Sa se scrie
/functia care determina zilele in care s-au
/inregistrat consumuri de energie minime.
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
int consum(float a[][10], int m, int n, int t[10])
{
	int i, j, ok, p = 0;
	float v[10], min;
	for (j = 0; j < n; j++) {
		v[j] = 0;
		for (i = 0; i < m; i++)
			v[j] = v[j] + a[i][j];
	}
	min = v[0];
	t[p] = 0;
	for(i=0;i<n;i++)
		if (v[i] < min) {
			min = v[i];
			p = 0;
			t[p] = i;
		}
		else 
			if (v[i] == min) {
				p = p + 1;
				t[p] = i;
			}
	return p;
}

void main(void)
{
	int m, n, i, j, nr, v[10];
	float a[10][10];
	citire_mat(a, &m, &n);
	afisare_mat(a, m, n);
	nr = consum(a, m, n, v);
	printf_s("produsele care au intregistrat consumuri de energie min sunt: ");
	for (i = 0; i < nr; i++)
		printf_s("%d; ", v[i]);
	_getch();
}
/*
fie o matrice de dim mxn, reprez consumul de energie pt fabricarea a m produse intr-o perioada de n zile.
sa se det zilele care au inregistrat consumuri de energie minime.
se insereaza:
nr de linii= 3
nr de coloane= 3
a[0][0]= 1
a[0][1]= 2
a[0][2]= 3
a[1][0]= 4
a[1][1]= 5
a[1][2]= 6
a[2][0]= 7
a[2][1]= 8
a[2][2]= 9
matricea este
 1.00; 2.00; 3.00;
 4.00; 5.00; 6.00;
 7.00; 8.00; 9.00;
se afiseaza:
produsele care au intregistrat consumuri de energie min sunt: 0;
*/