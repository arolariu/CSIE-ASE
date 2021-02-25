/*
/	PROBLEMA 4:
/
/	Sa se scrie programul pentru
/determinarea numerelor palindrome de
/lungime maxima dintr-un sir de numere naturale.
/
/	(C) 2019 - OLARIU ALEXANDRU RAZVAN
*/


#include<conio.h>
#include<malloc.h>
#include<stdio.h>

void main(void)
{
	int n, i, *x, *y, nr, lmax;
	printf("Introduceti dimensiunea sirului:");
	scanf_s("%d", &n);
	x = (int*)malloc(n * sizeof(int));
	printf("Introduceti elementele sirurilor:\n");
	for (i = 0; i < n; i++)
	{
		printf("x[%d]=", i);
		scanf_s("%d", x + i);
	}
	y = (int*)malloc(n * sizeof(int));
	lmax = 0;
	nr = 0;
	int inv, m, l;
	for (i = 0; i < n; i++)
	{
		inv = 0;
		m = x[i];
		l = 0;
		while (m)
		{
			inv = inv * 10 + m % 10;
			m = m / 10;
			l++;
		}
		if (inv == x[i])
			if (l < lmax)
		{
			lmax = l;
			y[0] = x[i];
			nr = 1;
		}
		else
			if (l == lmax) y[nr++] = x[i];
	}
	if (nr)
	{
		printf("Numerele palindrome de lungime maxima =%d sunt:", lmax);
		for (i = 0; i < nr; i++)printf("%d", *(x + i));
	}
	else
		printf("Nu exista niciun numar palindrom!");
	free(x);
	free(y);
	_getch();
}
/*
Output: "Introduceti marimea sirului:"
Input: n=4
x[0]=11
x[1]=2
x[2]=3
x[3]=4
Output: "Numerele palindroame de lungime maxima 2 sunt: 11"
*/
