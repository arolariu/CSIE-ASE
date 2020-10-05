/* 
/	PROBLEMA 13:
/
/	Se citeste un numar natural n.
/Se afiseze pe ecran un triunghi de forma :
/
/*
/**
/***
/.....
/* **...* (n caractere*) 
/
/	(C) 2019 - OLARIU ALEXANDRU RAZVAN
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void draw(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
            printf("*");
        printf("\n");
    }
}

void main(void)
{
    int number;
    scanf("%d", &number);
    draw(number);
}