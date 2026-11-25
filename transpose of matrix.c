#include <stdio.h>
int main()
{
    int A[3][3];
    int i, j;
    printf("Enter 9 numbers of matrix A:\n");
    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {scanf("%d", &A[i][j]);}
    }
    printf("Matrix A:\n");
    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {printf("%d ", A[i][j]);}
        printf("\n");
    }
int A_Transpose[3][3];
    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {A_Transpose[j][i] = A[i][j];}
    }
    printf("Transpose of A:\n");
    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {printf("%d ", A_Transpose[i][j]);}
        printf("\n");}
}