/*
/	PROBLEMA 18:
/
/	Se citesc 3 numere intregi. 
/Sa se afiseze cel mai mare dintre ele.
/
/	(C) 2019 - OLARIU ALEXANDRU RAZVAN
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int max_of_three(int a, int b, int c)
{
    int max = a > b ? a : b;
    max = max > c ? max : c;
    return max;
}
void main(void)
{
    int a, b, c;
    printf("a="); scanf("%d", &a);
    printf("b="); scanf("%d", &b);
    printf("c="); scanf("%d", &c);
    printf("Max number is: %d", max_of_three(a, b, c));
}