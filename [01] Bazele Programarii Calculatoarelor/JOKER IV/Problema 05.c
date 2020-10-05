/*
/	PROBLEMA 5:
/
/	Sa se scrie subprogramul
/care determina numarul de perechi
/de numere prime dintr-un sir de numere
/naturale nenule.
/
/	(C) 2019 - OLARIU ALEXANDRU RAZVAN
*/


#include<stdio.h>
#include<conio.h>

unsigned cmmdc(unsigned a, unsigned b)
{
	unsigned int r, d = a, i = b;
	do
	{
		r = d % i;
		d = i; i = r;
	} while (r != 0);
	return d;
}
int nr_prime(unsigned x[10], int n)
{
	int i, j, nr;
	nr = 0;
	for (i = 0; i < n; i++)
		for (j = i + 1; j < n; j++)
			if (cmmdc(x[i], x[j]) == 1) nr++;
	return nr;
}
void main(void)
{
	unsigned v[10]; int n, i;
	printf_s("nr de elemente din sir sunt= "); scanf_s("%d", &n);
	for (i = 0; i < n; i++)
	{
		printf_s("v[%d]= ", i); scanf_s("%d", &v[i]);
	}
	printf_s("nr de perechi de nr prime intre ele este=%d\n", nr_prime(v,n));
	_getch();
}
/*
sa se scrie subp care det numarul de perechi de numere prime dintr-un sir de nr naturale nenule.
se insereaza:
nr de elemente din sir sunt= 4
v[0]= 2
v[1]= 5
v[2]= 6
v[3]= 9
se afiseaza:
nr de perechi de nr prime intre ele este=4
*/