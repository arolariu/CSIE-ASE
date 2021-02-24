/*
/	PROBLEMA 15:
/
/Conversii explicite. Se citeste un caracter a. 
/Sa se afiseze codul sau ASCII. 
/Se citeste un numar natural c din intervalul[32,127]. 
/Sa se afiseze caracterul cu codul ASCII c.
/
/	(C) 2019 - OLARIU ALEXANDRU RAZVAN
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main(void)
{
    for (int k = 0; k <= 255; k++)  // for loop from 0-255  
    {
        printf("\nThe ascii value of %c is %d", k, k);
    }
}