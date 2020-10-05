/*
/	PROBLEMA 16:
/
/	Fie o matrice de dimensiune MxN 
/reprezentand profiturile nete obtinute
/de m societati comerciale intr-o perioada
/de n ani. Sa se scrie programul care
/afiseaza societatile care au inregistrat
/profitul net maxim.
/
/	(C) 2019 - OLARIU ALEXANDRU RAZVAN
*/


#include <stdio.h>

void main(void)
{
	int i, j, m, n, a[20][20], max, soc[20], nr;
	scanf_s("%d", &m);
	scanf_s("%d", &n);
	for (i = 0; i < m; i++)
		for (j = 0; j < n; j++)
			scanf_s("%d", &a[i][j]);
	max = a[0][0];
	for (i = 0; i < m; i++)
		for (j = 0; j < n; j++)
			if (a[i][j] > max)
				max = a[i][j];
	nr = 0;
	for (i = 0; i < m; i++)
	{
		j = 0;
		while ((j < n) && (max != a[i][j]))
			j++;
		if (j < n) { soc[nr] = i; nr++; }
	}
	printf("Societatile care au inregistrat profit net maxim %d sunt: \n", max);
	for (i = 0; i < nr; i++)
		printf("%d ", soc[i] + 1);
}
/*
Se insereaza:
2
2
40 50
60 30
SE AFISEAZA:
Societatile care au inregistrat profit net maxim 60 sunt :1
*/
