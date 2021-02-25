/*
/	PROBLEMA 1:
/
/	Sa se scrie programul
/pentru determinarea pozitiei
/tuturor aparitiilor unei valori
/date, intr-un vector neordonat,
/de dimensiune n.
/
/	(C) 2019 - OLARIU ALEXANDRU RAZVAN
*/


#include<stdio.h>
#include<malloc.h>
#include<conio.h>

void main(void)
{
	float *x, a;
	int n, i, *poz, nrpoz;
	printf("Introduceti dimensiunea vectorului, n=");
	scanf_s("%d", &n);
	x = (float *)malloc(n * sizeof(float));
	for (i = 0; i < n; i++)
	{
		printf("x[%d]=", i);
		scanf_s("%f", x + i);

	}
	printf("Introduceti valoarea cautata:");
	scanf_s("%f", &a);
	poz = (int*)malloc(n * sizeof(int));
	nrpoz = 0;
	for (i = 0; i < n; i++)
		if (x[i] == a)poz[nrpoz++] = i;
	if (!nrpoz)printf("Valoarea %5.2f nu exista in vector", a);
	else
	{
		printf("Valoarea %5.2f apare pe pozitiile:", a);
		for (i = 0; i < nrpoz; i++)
			printf("%d;", poz[i]);
	}
	free(x);
	free(poz);
	_getch();
}
/*
Output: "Introduceti dimensiunea vectorului n="
Input n=4
Output:
x[0]=1
x[1]=2
x[2]=3
x[3]=4
"Introduceti valoarea cautata: "
Input: 2
Output: "Valoarea 2.00 apare pe pozitiile: 1"
*/