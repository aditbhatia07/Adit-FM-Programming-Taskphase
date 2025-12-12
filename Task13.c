#include <stdio.h>
// Write a C program to print equilateral triangle or Pyramid star pattern series of n rows using (??????).
int main()
{
    int n, v = 0;
    while (!v)
    {
        printf("Enter number of rows: ");
        if (scanf("%d", &n) == 1 && n >= 1)
        {
            v = 1;
        }
        else
        {
            printf("Please enter a positive integer (1 or above).\n");
            while (getchar() != '\n');
        }
    }
    for (int i=1;i<=n;i++)
    {
        for (int j=n-i;j>=0;j--)
        {
            printf(" ");
        }
        for (int j=1;j<=(2*i)-1;j++)
        {
            printf("*");
        }
        printf("\n");
    }
}