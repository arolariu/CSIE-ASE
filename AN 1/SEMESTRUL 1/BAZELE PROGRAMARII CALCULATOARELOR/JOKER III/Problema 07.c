/*
/	PROBLEMA 7:
/
/	Fie un vector care contine
/notele obtinute de n studenti la
/o disciplina. Sa se scrie programul
/care determina studentii care au promovat
/cu cea mai mare nota.
/
/	(C) 2019 - OLARIU ALEXANDRU RAZVAN
*/


#include<conio.h>
#include<malloc.h>
#include<stdio.h>

void main(void)
{
	char *st, max;
	int n, i, nr, *poz;
	printf("Introduceti numarul de studenti din grupa, n=");
	scanf_s("%d", &n);
	st = (char*)malloc(n * sizeof(char));
	for (i = 0; i < n; i++)
	{
		fflush(stdin);
		printf("nota %d=", i + 1);
		scanf_s("%c", st + i);
	}
	poz = (int*)malloc(n * sizeof(int));
	nr = 0; max = 0;
	for (i = 0; i < n; i++)
		if (st[i] - '0' >= 5)
			if (st[i] > max)
			{
				max = st[i];
				poz[0] = i;
				nr = 1;
			}
			else if (st[i] == max)poz[nr++] = i;
			if (!nr)printf("Nu exista studenti care au promovat la aceasta disciplina \n");
			else
			{
				printf("Nota maxima este %c si a fost obtinuta de studentii:", max);
				for (i = 0; i < n; i++)printf("%d;", poz[i] + 1);
			}
	free(st); free(poz);
	_getch();
}
/*
Output:"Introduceti numarul de studenti din grupa, n="
Input: n=6
nota 1=nota 2=8
nota 3=nota 4=9
nota 5=nota 6=7
Output:"Nota maxima este 9 si a fost obtinuta de studentii:4;"
*/