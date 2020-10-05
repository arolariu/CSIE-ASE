/*
/	PROBLEMA 19:
/
/	Fiind data o matrice cu m 
/linii si n coloane cu 
/elementele 0 si 1 sa se
/determine numarul de perechi
/de linii complementare.
/
/	(C) 2019 - OLARIU ALEXANDRU RAZVAN
*/


#include<stdio.h>

void main(void)
{
	int i, j, m, n, k, OK;
	unsigned int a[20][20];
	scanf_s("%d", &m);
	scanf_s("%d", &n);
	for (i = 0; i < m; i++)
		for (j = 0; j < n; j++)
			scanf_s("%d", &a[i][j]);
	for (i = 0; i < m; i++)
		for (j = i + 1; j < m; j++)
		{
			OK = 1;
			for (k = 0; k < n; k++)
				if (a[i][k] == a[j][k]) OK = 0;
			if (OK) printf("Liniile %d si %d\n", i + 1, j + 1);
		}
}
/**
Se insereaza:
3
3
0 1 0
1 0 1
0 1 0
SE AFISEAZA:
Liniile 1 si 2
Liniile 2 si 3
*/
