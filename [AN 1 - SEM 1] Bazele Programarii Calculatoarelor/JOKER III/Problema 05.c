/*
/	PROBLEMA 5:
/
/	Sa se scrie programul
/pentru sortarea in ordine
/crescatoare a elementelor unui
/sir folosind adresarea cu pointeri.
/
/	(C) 2019 - OLARIU ALEXANDRU RAZVAN
*/


#include<conio.h>
#include<malloc.h>
#include<stdio.h>

void main(void)
{
	float *x, *p;
	int n, i;
	printf("Introduceti dimensiunea sirului:");
	scanf_s("%d", &n);
	x = (float*)malloc(n * sizeof(float));
	for (i = 0; i < n; i++)
	{
		printf("x[%d]=", i);
		scanf_s("%f", x + i);
	}
	float aux;
	int ok;
	do
	{
		ok = 1;
		p = x;
		while (p < (x + n - 1))
		{
			if (*p > *(p + 1))
			{
				aux = *p;
				*p = *(p + 1);
				*(p + 1) = aux;
				ok = 0;
			}
			p++;
		}
	}
	while (ok == 0);
	p = x;
	for (i = 0; i < n; i++)
		printf("%4.2f", *p++);
	free(x);
	_getch();
}
/*
Output: "Introduceti dimensiunea sirului: 4"
Input: 4
x[0]=1
x[1]=2
x[2]=3
x[3]=4
Output: 1.00  2.00 3.00 4.00
*/