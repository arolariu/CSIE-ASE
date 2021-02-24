/*
/
/	PROBLEMA 11:
/
/	Se citeste un numar natural n impar. 
/Sa se afiseze primele n perechi de numere 
/consecutive a caror suma este divizibila cu n.
/
/Ex: pentru n=3 se afiseaza perechile
/1 2
/4 5
/7 8
/
/	(C) 2019 - OLARIU ALEXANDRU RAZVAN
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void pairs(int n)
{
    int count = 0;
    for (int i = 1; ;i++)
    {
        if (count >= n)
            break;
        if (((i + i + 1) % n == 0) && (count++ < n))
            printf("%d %d\n", i, i + 1);
    }
}

void main(void)
{
    int number;
    printf("Enter an odd integer:");
    scanf("%d", &number);
    if (number % 2 == 1)
        pairs(number);
    else
        printf("You need to enter an odd integer!");
}