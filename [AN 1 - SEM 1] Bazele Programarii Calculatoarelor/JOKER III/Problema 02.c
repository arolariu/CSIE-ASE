/*
/	PROBLEMA 2:
/
/	Sa se scrie programul
/pentru determinarea elementului
/maxim dintr-un vector de dimensiune
/n si a tuturor aparitiilor sale.
/
/	(C) 2019 - OLARIU ALEXANDRU RAZVAN
*/


#include<stdio.h>
#include<malloc.h>
#include<conio.h>

void main(void)
{
	float *x, max;
	int n, i, *poz, nrpoz;
	printf("Introduceti dimensiunea vectorului, n=");
	scanf_s("%d", &n);
	x = (float*)malloc(n * sizeof(float));
	for (i = 0; i < n; i++)
	{
		printf("x[%d]=", i);
		scanf_s("%f", x + i);
	}
	poz = (int*)malloc(n * sizeof(int));
	max = x[0];
	poz[0] = 0;
	nrpoz = 1;
	for(i=1;i<n;i++)
		if (max < x[i])
		{
			max = x[i];
			poz[0] = i;
			nrpoz = 1;
		}
		else 
			if (max == x[i])
			{
				poz[nrpoz] = i;
				nrpoz++;
			}
	printf("Maximul este %5.2f si apare pe pozitiile:", max);
	for (i = 0; i < nrpoz; i++)printf("%d;", poz[i]);
	free(x);
	free(poz);
	_getch();
}
/*
Output: "Introduceti dimensiunile vecorului n= "
Input: n=4
x[0]=1
x[1]=2
x[2]=3
x[3]=4
Output: "Maximul este: 4.00 si este apare pe pozitiile: 3"
*/