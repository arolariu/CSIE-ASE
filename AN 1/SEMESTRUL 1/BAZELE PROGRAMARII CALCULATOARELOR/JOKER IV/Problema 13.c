/*
/	PROBLEMA 13:
/
/	Fie un masiv bidimensional
/de numere reale reprezentand valoarea
/convorbirilor telefonice a m abonati
/intr-o perioada de n luni. Sa se scrie
/functia pentru determinarea abonatilor
/care au inregistrat valori constante
/pentru cele n luni.
/
/	(C) 2019 - OLARIU ALEXANDRU RAZVAN
*/


#include<stdio.h>
#include<conio.h>

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

int col_nule(float a[][10], int m, int n, int v[10])
{
	int i, j, ok, p = 0;
	for (j = 0; j < n; j++)
	{
		ok = 1;
		for (i = 0; i < m; i++)
			if (a[i][j] !=0) ok = 0;
		if (ok == 1)
		{
			v[p] = j;
			p=p + 1;
		}
	}
	return p;
}
void main(void)
{
	int m, n, i, j, k, v[10];
	float a[10][10];
	citire_mat(a, &m, &n);
	afisare_mat(a, m, n);
	col_nule(a, m, n, v);
	k = col_nule(a, m, n, v);
	printf_s("consumurile nule sunt= ");
	for (i = 0; i < k; i++)
		printf_s("%d, ", v[i]);
	_getch();
}
/*
fie o matrice de dim mxn, reprez consumul de energie pt fabricarea a m produse intr-o perioada de n zile. 
sa se det zilele care au inregistrat consumuri nule pt toate produsele.
se insereaza:
nr de linii= 3
nr de coloane= 3
a[0][0]= 0
a[0][1]= 0
a[0][2]= 5
a[1][0]= 0
a[1][1]= 0
a[1][2]= 8
a[2][0]= 0
a[2][1]= 0
a[2][2]= 9
matricea este
 0.00; 0.00; 5.00;
 0.00; 0.00; 8.00;
 0.00; 0.00; 9.00;
se afiseaza:
consumurile nule sunt= 0, 1,
*/