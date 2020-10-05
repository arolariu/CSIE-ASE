/*
/	PROBLEMA 16:
/
/	Se citeste un numar intreg a reprezetand un an.
/Sa se verifice daca a este an bisect.
/
/	(C) 2019 - OLARIU ALEXANDRU RAZVAN
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int leap_year(int year)
{
    if ((year % 4 == 0) && (year % 100 != 0) || (year % 400 == 0))
        return 1;
    else
        return 0;
}
void main(void)
{
    int year;
    if (scanf("%d", &year) == leap_year(year))
        printf("Leap year.");
    else
        printf("Not a leap year.");
}