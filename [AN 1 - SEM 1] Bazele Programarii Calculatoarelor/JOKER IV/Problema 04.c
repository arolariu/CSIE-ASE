/*
/	PROBLEMA 4:
/
/	Sa se scrie subprogramul care determina
/cel mai mare divizor comun dintr-un sir
/de numere naturale nenule.
/
/	(C) 2019 - OLARIU ALEXANDRU RAZVAN
*/


#include<stdio.h>
#include<conio.h>

unsigned cmmdc(unsigned a, unsigned b) {
	unsigned int r, d = a, i = b;
	do {
		r = d % i;
		d = i; i = r;
	} while (r != 0);
	return d;
}
unsigned cmmdcn(unsigned x[10], int n) {
	int i = 0; unsigned d;
	d = x[0]; i = 1;
	while ((d != 1) && (i < n)) {
		d = cmmdc(d, x[i]); i++;
	}
	return d;
}
void main(void) {
	unsigned v[10]; int n, i;
	printf_s("nr de elemente din sir sunt= "); scanf_s("%d", &n);
	for (i = 0; i < n; i++)
	{
		printf_s("v[%d]= ", i); scanf_s("%d", &v[i]);
	}
	printf_s("\ncmmdc=%u", cmmdcn(v,n));
	_getch();
}
/*
sa se scrie subp care det cmmdc dintr-un sir de nr naturale.
se insereaza:
nr de elemente din sir sunt= 3
v[0]= 9
v[1]= 21
v[2]= 6
se afiseaza:
cmmdc=3
*/