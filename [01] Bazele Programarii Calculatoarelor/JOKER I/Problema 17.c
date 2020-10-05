/*
/	PROBLEMA 17:
/
/	Se citesc doua numere intregi a si b. 
/Daca a divide pe b sau b divide pe a atunci sa 
/se afiseze catul impartirii celui mai mare la cel mai 
/mic, 
/iar altfel restul impartirii celui mai mare la cel mai mic.
/
/	(C) 2019 - OLARIU ALEXANDRU RAZVAN
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main(void)
{
    int a, b; // random integers;
    printf("a="); scanf("%d", &a);
    printf("b="); scanf("%d", &b);
    if (a % b == 0 || b % a == 0)
        if (a > b)
            printf("\na / b =%d\n", a / b);
        else
            printf("\nb / a =%d\n", b / a);
    else
        if (a > b)
            printf("\na mod b =%d\n", a % b);
        else
            printf("\nb mod a =%d\n", b % a);
}