/*
/	PROBLEMA 9:
/
/	Se citesc numere naturale pana 
/cand se introduce numarul 0. 
/Sa se afiseze cel mai mare numar citit.
/
/	(C) 2019 - OLARIU ALEXANDRU RAZVAN
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main(void)
{
    int number, max = 0;
    while (scanf("%d", &number))
    {
        if (number == 0)
            break;
        if (number > max)
            max = number;
    }
    printf("MAX: %d", max);
}