/*
/	PROBLEMA 8:
/
/	Sa se scrie subprogrmaul C care determina
/urma unei matrici patratice.
/URMA = SUMA ELEMENTELOR DE PE DIAGONALA PRINCIPALA
/
/	(C) 2019 - OLARIU ALEXANDRU RAZVAN
*/


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void citire(int row_col);
void afisare(int row_col);
int urma(int row_col);

int i, j; // Variabile declarate global deoarece acestea sunt simple contoare, nu ne "jucam" cu ele;
int A[100][100]; // O matrice A de tip 100x100 maxim, nu am facut dinamic fiindcan nu mi se cerea;

int main()
{
    int row_col; // Declararea variabilei row_col ce reprezinta nr de linii/coloane ale matricei A;
    printf("Sa se introduca nr. de linii/coloane:\n\tRaspuns:"); // Text pentru a nu lasa user-ul in ceata;
    scanf("%d",&row_col); // Intrare de date: nr de coloane sau linii;
    citire(row_col); // Apelare functie void pentru intrarea datelor(elementelor) din matrice;
    afisare(row_col);// Apelare functie void pentru afisarea datelor(elementelor) din matrice;
    printf("Urma matricei introdusa de la tastatura este egala cu: %d", urma(row_col)); 
    /*
    Printf ce apeleaza o functie INT cu return ce returneaza suma elementelor de pe diagonala principala
    Adica URMA matricei. Acest printf este verbal, pentru a nu lasa user-ul in ceata;*/
    printf("\n\n");
    //system("pause");
    return 0;

}

void citire(int row_col)
{
    for (i = 0; i < row_col; i++)
        for (j = 0; j < row_col; j++)
        {
            printf("A[%d][%d] = ", i, j);
            scanf("%d", &A[i][j]); // Se introduc datele(elementele) pentru matricea A;
        }
    
}
void afisare(int row_col)
{
    printf("\n\n"); // Pentru o afisare mai clean;
    for (i = 0; i < row_col; i++)
    {
        for (j = 0; j < row_col; j++)
        {
            printf("%d\t", A[i][j]); // Se afiseaza cu un tabulator fiecare element din matricea A;
        }
        printf("\n"); // Se face un new-line dupa fiecare linie, pentru o citire mai responsiva;
    }
}

int urma(int row_col)
{
    int product = 0; // Product este o variabila de IESIRE, acesta este returnata la final;
    for (i = 0; i < row_col; i++) // Product semnifica URMA MATRICEI , adica SUMA de pe Diag. Princip.;
        for (j = 0; j < row_col; j++)
            if (i == j) // Se verifica daca acel element se afla pe diagonala principala;
                product += A[i][j]; // Daca da, atunci se aduna la suma de dinainte, alocata cu un 0 la start;
    return product; // Se returneaza URMA MATRICEI;
}
