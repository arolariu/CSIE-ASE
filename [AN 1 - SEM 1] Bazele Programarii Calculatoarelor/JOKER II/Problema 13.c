/*
/	PROBLEMA 13:
/
/	Fie o matrice de dimensiune MxN
/reprezentand consumurile de energie
/pentru fabricarea a m produse intr-o 
/perioada de n zile. Sa se scrie programul
/care afiseaza produsele care au inregistrat
/consumuri constante pe intreaga perioada.
/
/	(C) 2019 - OLARIU ALEXANDRU RAZVAN
*/


#include<stdio.h>
#include<conio.h>

void main(void)
{
	int a[10][10], i, j, n, m, ct[10], l;
	scanf_s("%d", &m);
	scanf_s("%d", &n);
	for (i = 0; i < m; i++)
		for (j = 0; j < n; j++)
			scanf_s("%d", &a[i][j]);
	l = 0;
	for (i = 0; i < m; i++)
	{
		j = 1;
		while (j < n && a[i][j] == a[i][0])j++;
		if (j == n)
		{
			ct[l] = i;
			l++;
		}
	}
	if (l)
	{
		printf("\nProdusele care au inregistrat consumuri constante sunt:");
		for (i = 0; i < 1; i++)
			printf("%d", ct[i] + 1);
	}
	else 
		printf("Nu exista produse care au inregistrat consumuri constante pe intreaga perioada");	
}

/**
Se insereaza:
2
2
5 4
8 8
SE AFISEAZA:
Produsele care au inregistrat consumuri constante sunt:2
*/
