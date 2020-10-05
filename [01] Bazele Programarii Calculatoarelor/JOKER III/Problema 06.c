/*
/	PROBLEMA 6:
/
/	Fie un vector in care sunt
/memorate vanzarile valorice ale unei
/societati comerciale intr-o perioada de
/n ani. Sa se scrie programul care determina
/amplitudinea vanzarilor, media vanzarilor si
/anii in care s-au inregistrat vanzari valorice
/peste medie.
/
/	(C) 2019 - OLARIU ALEXANDRU RAZVAN
*/


#include<conio.h>
#include<malloc.h>
#include<stdio.h>

void main(void)
{
	float *val, med, min, max;
	int n, i, *poz, k;
	printf("Introduceti numarul de ani, n=");
	scanf_s("%d", &n);
	val = (float*)malloc(n * sizeof(float));
	for (i = 0; i < n; i++)
	{
		printf("Val [%d]=", i + 1);
		scanf_s("%f", val + i);
	}
	for (med = min = max = val[0], i = 1; i < n; med += val[i], i++)
		if (val[i] < min)min = val[i];
		else if (val[i] > max)max = val[i];
	med /= n;
	k = 0;
	poz = (int*)malloc(n * sizeof(int));
	for (i = 0; i < n; i++)
		if (val[i] > med)poz[k++] = i;
	printf("Amplitudinea vanzarilor este %5.2f\n", max - min);
	printf("Anii in care s-a depasit media de %5.2f sunt:", med);
	for (i = 0; i < k; i++)printf("%d;", poz[i] + 1);
	free(val); free(poz);
	_getch();
}
/*
Output: "Introduceti numarul de ani n="
Input n=4
Val[1]=100
Val[2]=80
Val[3]=90
Val[4]=70
Output: "Amplitudinea vanzarilor este 30.00"
"Anii in care s-a depasit media de 85.00 sunt:1;3;"
*/