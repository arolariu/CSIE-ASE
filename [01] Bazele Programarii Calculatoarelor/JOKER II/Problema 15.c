/*
/	PROBLEMA 15:
/
/	Fie o matrice de dimensiune MxN
/reprezentand profiturile nete
/obtinute de m societati intr-o 
/perioada de n ani.Afisati
/societatile care au inregistrat
/profitul maxim pe intreaga perioada
/analizata.
/
/	(C) 2019 - OLARIU ALEXANDRU RAZVAN
*/


#include <stdio.h>

void main(void)
{
	int a[100][100], i, j, n, m, ct[100], l;
	scanf_s("%d", &m);
	scanf_s("%d", &n);
	for (i = 0; i < m; i++)
		for (j = 0; j < n; j++)
			scanf_s("%d", &a[i][j]);
	l = 0;
	for (j = 0; j < n; j++)
	{
		i = 0;
		while (i < m && a[i][j] == 0) i++;
		if (i == m)
		{
			ct[l] = j;
			l++;
		}
	}
	if (!l)
		printf("Nu exista zile in care nu s-au inregistrat vanzari ");
	else
	{
		printf("Zilele in care nu s-au inregistrat vanzari sunt: ");
		for (i = 0; i < l; i++)
			printf("%d", ct[i] + 1);
	}
	
}
int citire(float x[], int* n)
{
	int i;
	printf("n=");
	scanf_s("%d", n);
	for (i = 0; i < *n; i++)
	{
		printf("x[%d]=", i);
		scanf_s("%f", &x[i]);
	}
}
int citire2(float x[])
{
	int i, n;
	printf("n=");
	scanf_s("%d", &n);
	for (i = 0; i < n; i++)
	{
		printf("x[%d]=", i);
		scanf_s("%f", &x[i]);
	}
	return n;
}

void afisare(float x[], int n)
{
	int i;
	for (i = 0; i < n; i++)
		printf("%5.2f;", x[i]);
}
void medie(float x[], int n, float* med)
{
	float* med;
	int i, k;
	k = 0;
	*med = 0;
	for (i = 0; i < n; i++)
		if (x[i] != 0)
		{
			*med += x[i];
			k++;
		}
	if (k)*med /= k;
}


/**
Se insereaza:
2
2
1 0
1 0
SE AFISEAZA:
 Zilele in care nu s-au inregistrat vanzari sunt :2
*/
