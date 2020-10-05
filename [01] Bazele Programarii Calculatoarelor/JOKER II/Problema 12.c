/*
/	PROBLEMA 12:
/
/	Fie o matrice A de tip MxN
/care reprezinta notele obtinute
/de m studenti la n discipline.
/Sa se determine:
/a) stud integralisti
/b) stud bursieri
/c) stud restantieri
/
/	(C) 2019 - OLARIU ALEXANDRU RAZVAN
*/


#include<stdio.h>
#include<conio.h>

void main(void)
{
	int i, j, k, n, m, nr, a[10][10], v[10], b[10], r[10], max, nrd = 0;
	float s;
	scanf_s("%d", &m);
	scanf_s("%d", &n);
	for (i = 0; i < m; i++)
		for (j = 0; j < n; j++)
			scanf_s("%d", &a[i][j]);
	k = 0;
	for (i = 0; i < m; i++)
	{
		j = 0;
		while ((j < n) && (a[i][j] > 4))
			j++;
		if (j == n)
		{
			v[k] = i;
			k++;
		}
	}
	printf("\nStudentii integralisti: ");
	for (i = 0; i < k; i++)
		printf("%d", v[i] + 1);
	int nrb = 0;
	for (i = 0; i < k; i++)
	{
		s = 0;
		for (j = 0; j < n; j++)
			s += a[v[i]][j];
		float medie = s / n;
		if (medie >= 8.50)
			b[nrb++] = v[i];
	}
	printf("\nStudentii bursieri: ");
	for (i = 0; i < nrb; i++)
		printf("%d", b[i] + 1);
	for (j = 0; j < n; j++)
	{
		nr = 0;
		for (i = 0; i < m; i++)
			if (a[i][j] < 5)
				nr++;
		if (j == 0)
		{
			max = nr;
			r[0] = j;
			nrd = 1;
		}
		else if (nr > max)
		{
			max = nr;
			r[0] = j;
			nrd = 1;
		}
		else if (nr == max)
			r[nrd++] = j;
	}
	printf("\nDisciplinele la care s-au inregistrat numar maxim de restantieri: ");
	for (i = 0; i < nrd; i++)
		printf("%d", r[i] + 1);	
}

/**
Se insereaza:
2
3
10 10 9
4 5 6
SE AFISEAZA:
Studentii integralisti : 1
Studentii bursieri : 1
Disciplinele la care s-au inregistrat numar maxim de restantieri: 1
*/
