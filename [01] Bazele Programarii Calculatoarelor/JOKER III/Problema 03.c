/*
/	PROBLEMA 3:
/
/	Sa se scrie programul care
/realizeaza interclasarea a doi vectori
/de dimensiuni diferite. Masivele vor fi
/alocate dinamic in interiorul programului.
/
/	(C) 2019 - OLARIU ALEXANDRU RAZVAN
*/


#include<conio.h>
#include<malloc.h>
#include<stdio.h>

void main(void)
{
	int m, n, p, i, j, k;
	float *x, *y, *z;
	printf("Introduceti dimensiunea primului vector, m=");
	scanf_s("%d",&m);
	x = (float*)malloc(m * sizeof(float));
	for (i = 0; i < m; i++)
	{
		printf("x[%d]=", i);
		scanf_s("%f", x + i);
	}
	printf("Introduceti dimenisunea vectorului 2, n=");
	scanf_s("%d", &n);
	y = (float*)malloc(n * sizeof(float));
	for (i = 0; i < n; i++)
	{
		printf("y[%d]=", i);
		scanf_s("%f", y + i);
	}
	z = (float*)malloc((m + n) * sizeof(float));
	i = 0; j = 0; p = 0;
	while ((i < m) && (j < n))
		if (x[i] < y[j])
			z[p++] = x[i++];
		else
			z[p++] = y[j++];
	while (i < m)z[p++] = x[i++];
	while (j < n)z[p++] = y[j++];
	printf("Vectorul rezultat este: \n");
	for (i = 0; i < p; i++)
		printf("%5.2f", z[i]);
	free(x);
	free(z);
	free(y);
	_getch();
}
/*
Output: "Introduceti dimensiune primului vector m="
Input:
x[0]=1
x[1]=2
x[2]=3
x[3]=4
Output: "Introduceti dimensiunea vectorului 2, n="
Input: n=4
y[0]=4
y[1]=3
y[2]=2
y[3]=1
Output: "Vectorul rezultat este: 1.00 2.00 3.00 4.00 3.00 2.00 1.00 4.00 "
*/