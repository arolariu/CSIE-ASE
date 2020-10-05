/*
/	PROBLEMA 14:
/
/	Se citesc n numere naturale. 
/Sa se afiseze cel care are suma divizorilor maxima.
/
/	(C) 2019 - OLARIU ALEXANDRU RAZVAN
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int max_sum(int n)
{
    int sum = 0, number = 0;
    for (int i = 1; i <= n; i++)
    {
        int previous_sum = 0;
        for (int j = 1; j <= i; j++)
        {
            if (i % j == 0)
                previous_sum += j;
        }
        if (previous_sum > sum)
        {
            sum = previous_sum;
            number = i;
        }
    }
    return number;
}
void main(void)
{
    int limit;
    printf("Enter a natural integer:");
    scanf("%d", &limit);
    printf("The biggest number: %d", max_sum(limit));
}