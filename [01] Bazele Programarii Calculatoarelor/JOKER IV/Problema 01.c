/*
/	PROBLEMA 1:
/
/	Fie un vector reprezentand
/vanzarile valorice inregistrate
/de o societate comerciala intr-o 
/perioada de n zile. Sa se scrie
/subprogramul C (precum si programul apelator)
/care calculeaza valoarea medie a vanzarilor,
/eliminand din calcul mediei zilele care nu au
/inregistrat vanzari.
/
/	(C) 2019 - OLARIU ALEXANDRU RAZVAN
*/


#include<stdio.h>
#include<conio.h>

void citire(float x[10], int *n) 
{
	int i;
	printf_s("n= "); scanf_s("%d", n);
	for (i = 0; i < *n; i++) 
	{
		printf_s("x[%d]= ", i); 
		scanf_s("%f", &x[i]);
	}

}
void afisare(float x[10], int n)
{
	int i;
	for (i = 0; i < n; i++)
		printf_s("%5.2f;", x[i]);
}
void medie(float x[10], int n, float *med)
{
	int i, k;
	k = 0; *med = 0;
	for(i=0;i<n;i++)
		if (x[i] != 0) { *med += x[i]; k++; }
	if (k) *med /= k;
}
void main(void) 
{
	float v[100], medv;
	int n;
	citire(v, &n);
	medie(v, n, &medv);
	printf_s("vanzarile zilnice sunt: ");
	afisare(v, n);
	if (medv) printf_s("\nMedia vanzarilor este: %5.2f", medv);
	else printf_s("\nSocietatea nu a inregistrat vanzari");
	_getch();
}
/*
Fie un vector reprez vanzarile valorice inregistrate de o societate comerciala intr-o perdioada de n zile.
sa se scrie subp care calculeaza valoare medie a vazarilor, eliminand din calculul mediei zilele care nu au inregistrat vazari.
se insereaza:
n= 3
x[0]= 6
x[1]= 0
x[2]= 8
vanzarile zilnice sunt:  6.00; 0.00; 8.00;
se afiseaza:
Media vanzarilor este:  7.00
*/