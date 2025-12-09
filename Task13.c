#include <stdio.h>
// Write a C program to print equilateral triangle or Pyramid star pattern series of n rows using (??????).
int main()
{
    int n;
    printf("Enter number of rows: ");
    scanf("%d", &n);
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