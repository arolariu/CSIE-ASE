/*
/	PROBLEMA 6:
/
/	Sa se scrie subprogramul
/pentru compactarea unui vector
/prin eliminarea dublurilor.
/
/	(C) 2019 - OLARIU ALEXANDRU RAZVAN
*/


#include<stdio.h>
#include<conio.h>

void compac(int x[10], int *n)
{
	int i, j, k;
	for (i = 0; i < *n - 1; i++)
	{
		j = i + 1;
		while(j<*n)
			if (x[i] == x[j])
			{
				for (k = j; k < *n - 1; k++) x[k] = x[k + 1];
				(*n)--;
			}
			else j++;
	}
}

void main(void)
{
	int v[10], n, i;
	printf_s("nr de elemente este= "); scanf_s("%d", &n);
	for (i = 0; i < n; i++)
	{
		printf_s("v[%d]= ", i); scanf_s("%d", &v[i]);
	}
	compac(v, &n);
	printf_s("noul vector este: ");
	for (i = 0; i < n; i++)
	{
		printf_s("%d, ", v[i]);
	}

	_getch();
}
/*
sa se scrie subp pentru compactarea unui vector prin eliminare dublurilor.
se insereaza:
nr de elemente este= 4
v[0]= 6
v[1]= 2
v[2]= 3
v[3]= 6
se afiseaza:
noul vector este: 6, 2, 3,
*/