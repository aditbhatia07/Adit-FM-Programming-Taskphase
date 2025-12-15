#include <stdio.h>
// Develop a program to swap every two adjacent elements in an array using pointers.
int main ()
{
    int n, temp, v = 0;
    while (!v)
    {
        printf("Enter number of elements in the array: ");
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
    int arr[n];
    int *ptr = arr;
    for (int i = 0; i < n; i++)
    {
        v = 0;
        while (!v)
        {
            printf("\nEnter element of the array at position %d: ", i + 1);
            if (scanf("%d", (ptr + i)) == 1)
            {
                v = 1;
            }
            else
            {
                printf("Please enter valid integers only.\n");
                while (getchar() != '\n');
            }
        }
    }
    printf("\nArray is: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", *(ptr + i));
    }
    for (int i=0;i+1<n;i+=2)
    {
        temp=arr[i+1];
        arr[i+1]=arr[i];
        arr[i]=temp;
    }
    printf("\nArray after swapping adjacent elements is: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", *(ptr + i));
    }
//I'm leaving the last element unswapped if there's an odd number of elements because there's nothing to swap with
}