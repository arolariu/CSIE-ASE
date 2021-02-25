/*
/	PROBLEMA 20:
/
/	Se citesc 3 numere naturale a, b, c 
/reprezentand laturile unui triunghi. 
/Sa se calculeze aria triunghiului cu 
/laturile a, b, c. (Formula lui Heron)
/
/	(C) 2019 - OLARIU ALEXANDRU RAZVAN
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

void heron(int a, int b, int c)
{
    int sp = ((a + b + c) / 2);
    int area = sp * (sp - a) * (sp - b) * (sp - c);
    printf("%.2lf m^2", sqrt(area));
}
void main(void)
{
    int a, b, c; // random integers;
    printf("a="); scanf("%d", &a);
    printf("b="); scanf("%d", &b);
    printf("c="); scanf("%d", &c);
    heron(a, b, c);
}