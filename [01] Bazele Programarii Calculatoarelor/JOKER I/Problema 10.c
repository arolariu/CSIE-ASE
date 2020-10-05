/*
/	PROBLEMA 10:
/
/	Se citeste un numar natural n cu cel mult 4 cifre. 
/Sa se afiseze in ordine crescatoare toate cifrele pare.
/
/Ex: pentru n=9894 se afiseaza 4 8
/Ex: pentru n=9294 se afiseaza 2 4
/
/	(C) 2019 - OLARIU ALEXANDRU RAZVAN
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void swap(int* xp, int* yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

void bubbleSort(int arr[], int n)
{
    int i, j;
    for (i = 0; i < n - 1; i++)   
        for (j = 0; j < n - i - 1; j++)
            if (arr[j] > arr[j + 1])
                swap(&arr[j], &arr[j + 1]);
}
void digits(int n)
{
    int arr[4], i = 0;
    while (n > 0)
    {
        int even = n % 10;
        if (even % 2 == 0)
            arr[i++] = even;
        n /= 10;
    }
    bubbleSort(arr, i);
    for (int l = 0; l < i; l++)
        printf("%d ", arr[l]);
}

void main(void)
{
    int number;
    printf("Enter an integer:");
    scanf("%d", &number);
    if (number > 0 && number <= 9999)
        digits(number);
    else
        printf("The number must be in the [1,9999] interval!");
}