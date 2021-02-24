/*
/	PROBLEMA 6:
/
/	Sa se calculeze transpusa matricei
/A de ordinul n.
/
/	(C) 2019 - OLARIU ALEXANDRU RAZVAN
*/


#include <stdio.h>

void main(void)
{
	int n, a[10][10], b[10][10], i, j;
	scanf_s("%d", &n);
	for (i = 0; i < n; i++)
		for (j = 0; j < n; j++)
			scanf_s("%d", &a[i][j]);
	for (i = 0; i < n; i++)
		for (j = 0; j < n; j++)
			b[i][j] = a[j][i];
	printf("Matricea transpusa este:\n");
	for (i = 0; i < n; i++) {
		for (j = 0; j < n; j++)
			printf("%d ", b[i][j]);
		printf("\n");
	}
}
/**
Se insereaza:
3
1 2 3
4 5 6
7 8 9
SE AFISEAZA:
Matricea transpusa este:
1 4 7
2 5 8
3 6 9
*/

