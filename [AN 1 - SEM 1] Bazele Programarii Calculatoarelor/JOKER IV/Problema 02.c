/*
/	PROBLEMA 2:
/
/	Fie un vector, reprezentand
/vanzarile valorice inregistrate de o
/societate comerciala intr-o perioada de
/n zile. Sa se scrie subprogramul C care
/determina zilele in care nu s-au inregistrat
/vanzari.
/
/	(C) 2019 - OLARIU ALEXANDRU RAZVAN
*/

#include<stdio.h>
#include<conio.h>
void zile(int x[10], int n, int poz[10], int *k)
{
	int i;
	*k = 0;
	for (i = 0; i < n; i++)
		if (x[i] == 0)
		{
			poz[*k] = i; (*k)++;
		}
}
void main(void) 
{
	int v[10]; int n, i, nr, poz[10];
	printf_s("Nr de zile este= "); scanf_s("%d", &n);
	for (i = 0; i < n; i++)
	{
		printf_s("v[%d]= ", i); scanf_s("%d", &v[i]);
	}
	zile(v, n, poz, &nr);
	if (!nr) printf_s("in toate zilele s-au inregistrat vanzari");
	else {
		printf_s("zilele fara vanzari sunt: ");
		for (i = 0; i < nr; i++)
			printf_s("%d, ", poz[i]);
	}
	_getch();
}
/*
Fie un vector reprez vanzarile valorice inregistrate de o societate comerciala intr-o perdioada de n zile.
sa se scrie subp care det zilele in care nu s-au inregistrat vazari.
Nr de zile este= 4
v[0]= 6
v[1]= 9
v[2]= 0
v[3]= 0
se afiseaza:
zilele fara vanzari sunt: 2, 3,
*/