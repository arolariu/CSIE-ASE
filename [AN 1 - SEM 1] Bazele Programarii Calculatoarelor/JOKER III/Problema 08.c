/*
/	PROBLEMA 8:
/
/	Fie un vector care contine
/date despre studentii unei grupe
/din cadrul unei facultati.
/Articolele au urmatoarea structura:
/numar matricol,nume si prenume, numar note
/notele (maxim 15).
/Sa se scrie programul care determina
/studentii integralisti.
/
/	(C) 2019 - OLARIU ALEXANDRU RAZVAN
*/


#include<conio.h>
#include<malloc.h>
#include<stdio.h>

typedef struct
{
	int nr;
	char nume[30];
	char n, note[15];
}Student;

void main(void)
{
	int n, i, j, *poz, k;
	Student *st;
	printf("Introduceti numarul de studenti din grupa:");
	scanf_s("%d", &n);
	st = (Student*)malloc(n * sizeof(Student));
	for (i = 0; i < n; i++)
	{
		printf("Studentul %d: \nNumar matricol:", i + 1);
		scanf_s("%d", &st[i].nr);
		fflush(stdin);
		printf("Numele:"); gets_s(st[i].nume);
		printf("Nr. note:"); scanf_s("%d", &st[i].n);
		for (j = 0; j < st[i].n; j++)
		{
			printf("nota[%d]=", j);
			scanf_s("%d", &st[i].note[j]);
		}
	}
	poz = (int*)malloc(n * sizeof(int));
	k = 0;
	for (i = 0; i < n; i++)
	{
		j = 0;
		while ((j < st[i].n) && (st[i].note[j] >= 5))j++;
		if (j == st[i].n)poz[k++] = i;
	}
	if (!k)printf("Nu exista studenti integralisti in aceasta grupa");
	else {
		printf("Studentii integralisti sunt:");
		for (i = 0; i < k; i++)printf("\n%d,%-s", i + 1, st[poz[i]].nume);
	}
	free(st); free(poz);
	_getch();
}
/*
Introduceti numarul de studenti din grupa:4
Studentul 1:
Numar matricol:1
Numele:Nr. note:2
nota[0]=10
nota[1]=10
Studentul 2:
Numar matricol:2
Numele:Nr. note:2
nota[0]=5
nota[1]=5
Studentul 3:
Numar matricol:3
Numele:Nr. note:2
nota[0]=3
nota[1]=7
Studentul 4:
Numar matricol:4
Numele:Nr. note:2
nota[0]=10
nota[1]=6
Studentii integralisti sunt:
1,
2,
3,
*/