/*
/	PROBLEMA 7-10:
/
/	Fie un vector care contine
/date despre produsele vandute de o
/societate comerciala intr-o perioada de
/n zile. Pentru fiecare zi se va retine:
/numarul de produse vandute, codurile produselor
/cantitatile si preturile unitare ale acestora.
/Sa se scrie subprograme C care rezolva urmatoarele:
/
/a) sa se determine valoarea produselor vandute
/intr-o anumita zi.
/b)sa se determine valoarea vanzarilor pentru un
/produs,identificat prin cod, pe intreaga perioada.
/c)sa se determine valoarea vanzarilor tuturor
/produselor pe intreaga perioada analizata.
/d)sa se determine zilele in care s-au inregistrat
/cele mai mari vanzari, precum si maximul vanzarilor.
/
/	(C) 2019 - OLARIU ALEXANDRU RAZVAN
*/

#include<stdio.h>
#include<conio.h>


typedef struct
{
	int nr;
	struct PRODUS
	{
		int codp;
		float cant, pret;
	}p[50];
}ZI;


double val_zi(ZI v[10], int n, int z)
{
	int i; double val = 0;
	if (z<1 || z>n) val = -1;
	else
	{
		for (i = 0; i < v[z - 1].nr; i++)
			val += v[z - 1].p[i].cant*v[z - 1].p[i].pret;
	}
	return val;
}

double val_prod(ZI v[10], int n, int codp)
{
	int i, j;  double val = 0;
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < v[i].nr; j++)
			if (codp == v[i].p[j].codp)
				val = val+ v[i].p[j].cant*v[i].p[j].pret;
	}
	return val;
}

double val_totala(ZI v[10], int n)
{
	int i, j; double val = 0;
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < v[i].nr; j++)
			val =val+ v[i].p[j].cant*v[i].p[j].pret;
	}

	return val;
}

void zile(ZI v[10], int n, double *max, int *k, int poz[10])
{
	int i, j; double val;
	*max = -1;
	for (i = 0; i < n; i++)
	{
		val = 0;
		for (j = 0; j < v[i].nr; j++)
				val += v[i].p[j].cant*v[i].p[j].pret;
		if (val > *max)
		{
			*max = val; poz[0] = i; *k = 1;
		}
		else if (val == *max)
		{
			poz[*k] = i; (*k)++;
		}
	}
}

void main(void)
{
	int n, i, j; ZI v[50];
	printf_s("nr de zile este= "); scanf_s("%d", &n);
	for (i = 0; i < n; i++)
	{
		printf_s("ziua %d:\n", i+1);
		printf_s("nr de produse: "); scanf_s("%d", &v[i].nr);
		for (j = 0; j < v[i].nr; j++)
		{
			printf_s("cod produs %d: ", j+1); scanf_s("%d", &v[i].p[j].codp);
			printf_s("cantitatea vanduta: "); scanf_s("%f", &v[i].p[j].cant);
			printf_s("pret unitar: "); scanf_s("%f", &v[i].p[j].pret);
		}
	}
//prima cerinta
	int z;
	printf_s("ziua: "); scanf_s("%d", &z);
	double val = val_zi(v, n, z);
	if(val==-1) printf_s("nu exista ziua %d", n);
	else printf_s("valoarea vanzarilor din ziua %d este %5.21f\n", z, val);
//cerinta a doua
	int cod;
	printf_s("codul produsului: "); scanf_s("%d", &cod);
	double valp = val_prod(v, n, cod);
	if (valp == 0) printf_s("produsul cu acest cod nu exista\n");
	else printf_s("valoarea vanzarilor pt acest produs este %5.21f\n", valp);
//cerinta a treia
	 printf_s("valoarea vanzarilor pe intreaga perioada este %5.21f\n", val_totala(v,n));
//cerinta a patra
	 int k, poz[50];
	 double max;
	 zile(v, n, &max, &k, poz);
	 printf_s("zilele in care s-a inregiztrat val max de %5.21f sunt:", max);
	 for (i = 0; i < k; i++)
		 printf_s("%d; ", poz[i]);
	_getch();
}
/*
fie un vector care contine date despre produsele vandute de o societate comerciala intr-o de n zile.
pentru fiecare zi se va retine: nr de produse vandute, codurile produselor, cantitatile si preturile unitare le acestora.
sa se scrie subp care rezolva urmatoarele cerinte:
-sa se det val prod vandute pt un produs intr-o anumita zi;
-sa se det val vazarilor pt un produs, identificat printr-un cod, pe intreaga perioada analizata;
-sa se det val vanzarilor tuturor produselor pe intreaga perioada analizata;
-sa se det zilele in care s-au inregistrat cele mai mari vanzari, precum si maximul vanzarilor;
se insereaza:
nr de zile este= 2
ziua 1:
nr de produse: 2
cod produs 1: 123
cantitatea vanduta: 20
pret unitar: 10
cod produs 2: 203
cantitatea vanduta: 5
pret unitar: 15
ziua 2:
nr de produse: 1
cod produs 1: 104
cantitatea vanduta: 25
pret unitar: 5
se afiseaza:
ziua: 2
valoarea vanzarilor din ziua 2 este 125.000000000000000000000
codul produsului: 200
produsul cu acest cod nu exista
valoarea vanzarilor pe intreaga perioada este 400.000000000000000000000
zilele in care s-a inregiztrat val max de 275.000000000000000000000 sunt:0;
*/