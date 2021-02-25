/*
/	PROBLEMA 9:
/
/	Fie un vector care contine
/date despre studentii unei grupe
/din cadrul facultatii.
/Articolele au urmatoarea structura:
/nume si prenume, note (maxim 15).
/Sa se scrie programul care calculeaza
/media notelor pentru m discipline date.
/
/	(C) 2019 - OLARIU ALEXANDRU RAZVAN
*/


#include<conio.h>
#include<malloc.h>
#include<stdio.h>

typedef struct
{
	char nume[30], note[15];
}
Student;

void main(void)
{
	int n, m, i, j;
	Student *st;
	float *med;
	printf("Introduceti numarul de discipline:");
	scanf_s("%d", &m);
	printf("Introduceti numarul de studenti din grupa:");
	scanf_s("%d", &n);
	st = (Student*)malloc(n * sizeof(Student));
	for (i = 0; i < n; i++)
	{
		printf("Studentul %d: \n", i + 1);
		fflush(stdin);
		printf("Numele:"); gets_s(st[i].nume);
		for (j = 0; j < m; j++)
		{
			printf("nota[%d]=", j + 1);
			scanf_s("%d", &st[i].note[j]);
		}
	}
	med = (float*)malloc(m * sizeof(float));
	for (j = 0; j < m; j++)
	{
		med[j] = 0;
		for (i = 0; i < n; i++)
			med[j] += st[i].note[j];
		med[j] /= n;
	}
	printf("Mediile sunt:\n");
	for (j = 0; j < m; j++)
		printf("Disciplina %d=%5.2f\n", j + 1, med[j]);
	free(st); free(med);
	_getch();
}
/*
Introduceti numarul de discipline:3
Introduceti numarul de studenti din grupa:3
Studentul 1:
Numele:nota[1]=10
nota[2]=10
nota[3]=10
Studentul 2:
Numele:nota[1]=10
nota[2]=9
nota[3]=3
Studentul 3:
Numele:nota[1]=5
nota[2]=6
nota[3]=5
Mediile sunt:
Disciplina 1= 8.33
Disciplina 2= 8.33
Disciplina 3= 6.00
*/