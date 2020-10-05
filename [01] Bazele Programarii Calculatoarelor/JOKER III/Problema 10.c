/*
/	PROBLEMA 10:
/
/	Fie un vector care
/contine date despre studentii
/bursieri ai unei facultati.
/Articolele au urmatoarea structura:
/nume si prenume, media obtinuta.
/Sa se scrie programul care ordoneaza
/studentii bursieri descrescator dupa medie
/iar pentru aceeasi medie, ordoneaza crescator
/dupa nume.
/
/	(C) 2019 - OLARIU ALEXANDRU RAZVAN
*/


#include<conio.h>
#include<malloc.h>
#include<stdio.h>
#include<string.h>

typedef struct
{
	char nume[30];
	float medie;
}Student;

void main(void)
{
	int n, i, j, max; Student *st, aux;
	printf("Introduceti numarul de studenti bursieri:");
	scanf_s("%d", &n);
	st = (Student*)malloc(n*sizeof(Student));
	for (i = 0; i < n; i++)
	{
		printf("Studentul %d:\n", i + 1);
		fflush(stdin);
		printf("Numele:"); gets_s(st[i].nume);
		printf("Media:"); scanf_s("%f", &st[i].medie);
	}
	for (i = 0; i < n; i++)
	{
		for (max = i, j = i + 1; j < n; j++)
			if ((st[max].medie < st[j].medie) || ((st[max].medie == st[j].medie) && (_stricmp(st[max].nume, st[j].nume) > 0)))max = j;
		if (max != i) {
			aux = st[i]; st[i] = st[max]; st[max] = aux;
		}
	}
	printf("Studentii bursieri sunt:\n");
	for (i = 0; i < n; i++)
		printf("%d.%-30s:%5.2f\n", i + 1, st[i].nume, st[i].medie);
	free(st);
	_getch();
}
/*
Introduceti numarul de studenti bursieri:3
Studentul 1:
Numele:Media:10
Studentul 2:
Numele:Media:10
Studentul 3:
Numele:Media:9.70
Studentii bursieri sunt:
1.                              :10.00
2.                              :10.00
3.                              : 9.70
*/