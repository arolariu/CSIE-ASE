/*
/	PROBLEMA 11:
/
/	Fie un masiv bidimensional
/de numere reale reprezentand
/valoarea convorbirilor telefonice
/a m abonati intr-o perioada de n luni.
/Sa se scrie un program care sa contina
/un subprogram pentru a determina numarul
/abonatilor care au inregistrat valori
/constante pentru cele n luni.
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
		printf_s("a[%d][%d]= ", i, j);
		scanf_s("%f", &a[i][j]);
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

void nr_lin_const_var1(float a[][10], int m, int n, int *nr)
{
	int i, j, ok;
	*nr = 0;
	for (i = 0; i < m; i++)
	{
		ok = 1;
		for (j = 0; j < n; j++)
			if (a[i][0] != a[i][j]) ok = 0;
		if (ok == 1) (*nr)=(*nr) + 1;
	}
}

int nr_lin_const_var2(float a[][10], int m, int n)
{
	int i, j, ok, nr = 0;
	for (i = 0; i < m; i++)
	{
		ok = 1;
		for (j = 0; j < n; j++)
			if (a[i][0] != a[i][j]) ok = 0;
		if (ok == 1) nr = nr + 1;
	}
	return nr;
}

void main(void)
{
	int m, n, i, j, numar1, numar2;
	float a[10][10];
	citire_mat(a, &m, &n);
	afisare_mat(a, m, n);
	nr_lin_const_var1(a, m, n, &numar1);
	printf_s("(varanta 1) numarul liniilor cu elem const este= %d", numar1); printf_s("\n");
	numar2=nr_lin_const_var2(a, m, n);
	printf_s("(varanta 2) numarul liniilor cu elem const este= %d", numar2);
	_getch();
}
/*
fie un masiv bidimensional de numere reale care reprez valoarea convorbirilor telefonice a m abonati intr-o perioada de n luni.
sa se scrie un program care sa contina un subprogram pt a det nr abonailor care au intregistrat valori constante pt cele n luni.
se insereaza:
nr de linii= 3
nr de coloane= 3
a[0][0]= 1
a[0][1]= 1
a[0][2]= 1
a[1][0]= 2
a[1][1]= 6
a[1][2]= 5
a[2][0]= 3
a[2][1]= 3
a[2][2]= 3
matricea este
 1.00; 1.00; 1.00;
 2.00; 6.00; 5.00;
 3.00; 3.00; 3.00;
se afiseaza:
(varanta 1) numarul liniilor cu elem const este= 2
(varanta 2) numarul liniilor cu elem const este= 2
*/