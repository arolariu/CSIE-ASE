/* 
/	PROBLEMA 12:
/
/	Se citesc de la tastatura numere naturale pana cand 
/antepenultimul + penultimul = ultimul.
/Sa se afiseze suma numerelor citite.
/
/Ex.daca citim 3 5 2 4 6 se va opri 
/citirea dupa citirea lui 6 si se va afisa 20.
/
/	(C) 2019 - OLARIU ALEXANDRU RAZVAN
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void checker(int c1, int c2)
{
    int sum = c1 + c2;
    int c3;
    while (scanf("%d", &c3))
    {
        sum += c3;
        if (c1 + c2 == c3)
        {
            printf("\n%d + %d = %d\n", c1, c2, c3);
            printf("TOTAL SUM: %d", sum);
            break;
        }
        else
        {
            c1 = c2;
            c2 = c3;
        }
    }
}
void main(void)
{
    int c1, c2;
    scanf("%d", &c1);
    scanf("%d", &c2);
    checker(c1, c2);
}