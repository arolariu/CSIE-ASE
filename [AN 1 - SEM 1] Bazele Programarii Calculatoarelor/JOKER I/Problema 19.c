/*
/	PROBLEMA 19:
/
/	Se citesc 3 numere naturale a, b, c. 
/Sa se afiseze in ordine crescatoare a valorii lor.
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
int min_of_three(int a, int b, int c)
{
    int min = a > b ? b : a;
    min = min > c ? c : min;
    return min;
}
void sort(int a, int b, int c)
{
    int first = min_of_three(a, b, c);
    int third = max_of_three(a, b, c);
    int second = a + b + c - first - third;
    printf("%d %d %d", first, second, third);
}
void main(void)
{
    int a, b, c; // random integers;
    printf("a="); scanf("%d", &a);
    printf("b="); scanf("%d", &b);
    printf("c="); scanf("%d", &c);
    sort(a, b, c);
}