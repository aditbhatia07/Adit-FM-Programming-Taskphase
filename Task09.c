#include <stdio.h>
//Take each element of the 4x4 matrix from the user and print it, then add each element from the 4x4 matrix and print the sum, print the sum of both the diagonals
int main()
{
    int matrix[4][4], sum=0, d1=0, d2=0;
    for (int i=0; i<4; i++)
    {
        for (int j=0; j<4;j++)
        {
            printf("Enter element of matrix at position (%d,%d)", i+1,j+1);
            scanf("%d", &matrix[i][j]);
        }
    }
    printf("Entered matrix is:\n");
    for (int i = 0; i < 4; i++)
    {
        printf("%d %d %d %d\n", matrix[i][0], matrix[i][1], matrix[i][2], matrix[i][3]);
    }
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            sum=sum+matrix[i][j];
        }
    }
    printf("Sum of all elements in the matrix is: %d\n", sum);
    for (int i = 0; i < 4; i++)
    {
                d1=d1+matrix[i][i];
    }
    printf("Sum of main diagonal of the matrix is: %d\n", d1);
    for (int i = 3; i >=0; i--)
    {
        d2=d2+matrix[i][3-i];
    }
    printf("Sum of anti-diagonal of the matrix is: %d\n", d2);
}