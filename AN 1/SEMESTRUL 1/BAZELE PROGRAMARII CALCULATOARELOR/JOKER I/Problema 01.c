/*
/	PROBLEMA 1:
/
/	Pentru fiecare linie a 
/unei matrice sa se calculeze
/produsul dintre cel mai mare
/si cel mai mic element.
/
/	(C) 2019 - OLARIU ALEXANDRU RAZVAN
*/


#include <stdio.h>

void main(void)
{
	float a[10][10], v[10], min, max;
	int n, m, i, j, k;
	scanf_s("%d", &m);
	scanf_s("%d", &n);
	for (i = 0; i < n; i++)
		v[i] = 0;
	for (i = 0; i < m; i++)
		for (j = 0; j < n; j++)
			scanf_s("%f", &a[i][j]);
	for (i = 0; i < m; i++)
	{
		min = a[i][0];
		max = a[i][0];
		for (j = 0; j < n; j++)
		{
			if (a[i][j] > max)
				max = a[i][j];
			if (a[i][j] < min)
				min = a[i][j];
		}
		v[i] = max * min;
	}
	for (i = 0; i < m; i++)
		printf("v(%d)=%f\t", i, v[i]);
}

/*
Se insereaza:
3
4
1 2 3 4
5 6 7 8
9 10 11 12
SE AFISEAZA:
v(0)=4.000000
v(1)=40.000000
v(2)=108.000000
*/


