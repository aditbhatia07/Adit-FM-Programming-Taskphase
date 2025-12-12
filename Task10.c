#include <stdio.h>
// Write a Program to Rotate a matrix by 90 degrees in the clockwise direction in C.
int main()
{
    int r,c, v = 0;
    while (!v)
    {
        printf("Enter Number of Rows in Matrix: ");
        if (scanf("%d", &r) == 1 && r >= 1)
        {
            v = 1;
        }
        else
        {
            printf("Please enter a positive integer (1 or above).\n");
            while (getchar() != '\n');
        }
    }
    v = 0;
    while (!v)
    {
        printf("Enter Number of Columns in Matrix: ");
        if (scanf("%d", &c) == 1 && c >= 1)
        {
            v = 1;
        }
        else
        {
            printf("Please enter a positive integer (1 or above).\n");
            while (getchar() != '\n');
        }
    }
    int mat[r][c];
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("Enter element of matrix at position (%d,%d)", i + 1, j + 1);
            scanf("%d", &mat[i][j]);
        }
    }
    printf("Entered Matrix is: \n");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
    int rmat[c][r];
    for (int i = 0; i < c; i++)
    {
        for (int j = 0; j < r; j++)
        {
            rmat[i][j]=mat[j][i];
        }
    }
    printf("Matrix after being rotated by 90 degrees clockwise is: \n");
    for (int i = 0; i < c; i++)
    {
        for (int j = 0; j < r; j++)
        {
            printf("%d ", rmat[i][j]);
        }
        printf("\n");
    }
}