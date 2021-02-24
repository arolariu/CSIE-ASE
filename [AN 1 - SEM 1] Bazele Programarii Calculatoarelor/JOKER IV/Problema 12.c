/*
/	PROBLEMA 12:
/
/	Fie un masiv bidimensional
/de numere reale reprezentand
/valoarea convorbirilor telefonice
/a m abonati intr-o perioada de n luni.
/Sa se scrie functia pentru determinarea
/abonatilor care au inregistrat valori constante
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

void lin_const(float a[][10], int m, int n, int v[10], int *nr)
{
	int i, j, ok;
	*nr = 0;
	for (i = 0; i < m; i++)
	{
		ok = 1;
		for (j = 0; j < n; j++)
			if (a[i][0] != a[i][j]) ok = 0;
		if (ok == 1)
		{
			v[(*nr)] = i;
			(*nr) = (*nr) + 1;
		}
	}
}
void main(void)
{
	int m, n, i, j, k, v[10];
	float a[10][10];
	citire_mat(a, &m, &n);
	afisare_mat(a, m, n);
	lin_const(a, m, n, v, &k);
	printf_s("abonatii cu liniile cu elem const sunt= ");
	for (i = 0; i < k; i++)
		printf_s("%d, ", v[i]);
	_getch();
}
/*
fie un masiv bidimensional de numere reale care reprez valoarea convorbirilor telefonice a m abonati intr-o perioada de n luni.
sa se scrie fct pt det abonailor care au intregistrat valori constante pt cele n luni.
se insereaza:
nr de linii= 3
nr de coloane= 3
a[0][0]= 2
a[0][1]= 2
a[0][2]= 2
a[1][0]= 6
a[1][1]= 4
a[1][2]= 5
a[2][0]= 9
a[2][1]= 9
a[2][2]= 9
matricea este
 2.00; 2.00; 2.00;
 6.00; 4.00; 5.00;
 9.00; 9.00; 9.00;
se afiseaza:
abonatii cu liniile cu elem const sunt= 0, 2,
*/