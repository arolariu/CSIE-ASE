/*
/	PROBLEMA 3:
/
/	Fie un vector, reprezentand
/vanzarile valorice inregistrate de o
/societate comerciala intr-o perioada de
/n zile. Sa se scrie subprogramul C care 
/verifica daca societatea a inregistrat cresteri
/zilnice de vanzari pe intreaga perioada analizata.
/
/	(C) 2019 - OLARIU ALEXANDRU RAZVAN
*/


#include<stdio.h>
#include<conio.h>

char crescator(int x[10], int n)
{
	int i = 0, ok = 0;
	while (i < n - 1 && x[i] < x[i + 1]) i++;
		if (i < n - 1) ok = 0;
		else ok = 1;
	return ok;
}
void main(void) {
	int v[10], n, i;
	printf_s("Nr de zile este= "); scanf_s("%d", &n);
	for (i = 0; i < n; i++)
	{
		printf_s("v[%d]= ", i); scanf_s("%d", &v[i]);
	}
	char ok=crescator(v, n);
	if (ok) printf_s("s-au inregistrat cresteri zilnice pe intrega perioada");
	else printf_s("nu s-au inregistrat cresteri zilnice pe intrega perioada");
	_getch();
}
/*
Fie un vector reprez vanzarile valorice inregistrate de o societate comerciala intr-o perdioada de n zile.
sa se scrie subp care verifica daca societatea a inregistrat cresteri zilenice de vazari pe intreaga perioada analiza.
se insereaza:
Nr de zile este= 4
v[0]= 1
v[1]= 3
v[2]= 6
v[3]= 2
se afiseaza:
nu s-au inregistrat cresteri zilnice pe intrega perioada
*/