/*
/	PROBLEMA 10:
/
/	Fie o matrice patratica de
/dimensiune n. Sa se sorteze
/crescator elementele de pe DP
/prin interschimbari Row/Column.
/
/	(C) 2019 - OLARIU ALEXANDRU RAZVAN
*/


#include <stdio.h>

void insertion_sort(int arr[3][3], int length)
{
	signed int i, j, tmp;
	for (i = 1; i < length; i++)
	{
		j = i;
		while (j > 0 && arr[j - 1][j - 1] > arr[j][j])
		{
			tmp = arr[j][j];
			arr[j][j] = arr[j - 1][j - 1];
			arr[j - 1][j - 1] = tmp;
			j--;
		}
	}
}

void main(void)
{

	int a[3][3] = { { 2, 0, 0 }, { 0, 7, 0 }, { 0, 0, 1 } };
	insertion_sort(a, 3);
	for (signed int i = 0; i < 3; ++i)
	{
		for (signed int j = 0; j < 3; ++j)
			printf("  %d  ", a[i][j]);
		printf("\n");
	}
}