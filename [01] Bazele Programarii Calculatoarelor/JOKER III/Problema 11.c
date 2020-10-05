/*
/	PROBLEMA 11:
/
/	Fie un masiv bidimensional
/de numere reale, reprezentand
/vanzarile de carburant inregistrat 
/de m masini intr-o perioada de n zile.
/Sa se scrie un program pentru calcularea
/numarului de aparitii a unei valori citite
/de la tastatura in masiv. Masivul este alocat
/dinamic.
/
/	(C) 2019 - OLARIU ALEXANDRU RAZVAN
*/


#include<conio.h>
#include<malloc.h>
#include<stdio.h>

void main(void)
{
	float **a, val;
	int m, n, i, j, nr = 0;
	
	printf("Numarul de linii="); scanf_s("%d", &m);
	printf("Numarul de coloane="); scanf_s("%d", &n);
	a = (float**)malloc(m * sizeof(float*));
	for (i = 0; i < m; i++)
		a[i] = (float*)malloc(n * sizeof(float));
	for(i=0;i<m;i++)
		for (j = 0; j < n; j++)
		{
			printf("a[%d][%d]=", i, j);
				scanf_s("%f", &(*(*(a + i) + j)));
		}
	printf("val="); scanf_s("%f", &val);
	printf("Matricea este \n");
	for(i=0;i<m;i++)
	{
		for (j = 0; j < n; j++)
			printf("%5.2f", *(*(a + i) + j));
			printf("\n");
	}
	for (i = 0; i < m; i++)
		for (j = 0; j < n; j++)
			if ((*(*(a + i) + j)) == val)nr = nr + 1;
	printf("Valoarea cautata apare de =%d ori", nr);
	for (i = 0; i < m; i++)
		free((*(a + i) + j));
	free(a);
	_getch();
}
/*
Numarul de linii=3
Numarul de coloane=3
a[0][0]=1
a[0][1]=2
a[0][2]=3
a[1][0]=3
a[1][1]=2
a[1][2]=1
a[2][0]=2
a[2][1]=2
a[2][2]=2
val=3
Matricea este
 1.00 2.00 3.00
 3.00 2.00 1.00
 2.00 2.00 2.00
Valoarea cautata apare de =2 ori
*/