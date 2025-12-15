#include <stdio.h>
// Create a program to remove all duplicates from an array of integers.
int main()
{
    int n, i, un, v = 0;
    while (!v)
    {
        printf("Enter number of integers in the array: ");
        if (scanf("%d", &n) == 1 && n >= 1)
        {
            v = 1;
        }
        else
        {
            printf("Please enter a positive integer (1 or above).\n");
            while (getchar() != '\n')
                ;
        }
    }
    int arr[n];
    for (i = 0; i < n; i++)
    {
        v = 0;
        while (!v)
        {
            printf("\nEnter element of the array at position %d: ", i + 1);
            if (scanf("%d", &arr[i]) == 1)
            {
                v = 1;
            }
            else
            {
                printf("Please enter an integer.\n");
                while (getchar() != '\n');
            }
        }
    }
    printf("\nArray is: ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    un = 0;
    for (i = 0; i < n; i++)
    {
        int found = 0;
        for (int j = 0; j < i; j++)
        {
            if (arr[i] == arr[j])
            {
                found = 1;
                break;
            }
        }
        if (found == 0)
        {
            un++;
        }
    }
    printf("\nNumber of unique integers is: %d\n", un);
    int t[un];
    int x = 0;
    for (i = 0; i < n; i++)
    {
        int found = 0;
        for (int j = 0; j < i; j++)
        {
            if (arr[i] == arr[j])
            {
                found = 1;
                break;
            }
        }
        if (found == 0)
        {
            t[x] = arr[i];
            x++;
        }
    }
    printf("New Array is: ");
    for (i = 0; i < un; i++)
    {
        printf("%d ", t[i]);
    }
    printf("\n");
    return 0;
}