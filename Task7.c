#include <stdio.h>
//Write a program to find the second - largest element in an array using pointers.
int main()
{
    int n, l, sl;
    printf("Enter number of elements in the array: ");
    scanf("%d", &n);
    int arr[n];
    int *ptr = arr;
    for (int i = 0; i < n; i++)
    {
        printf("\nEnter element of the array at position %d: ", i + 1);
        scanf("%d", (ptr+i));
    }
    printf("\nArray is: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", *(ptr+i));
    }
    if (*(ptr) > *(ptr + 1))
    {
        l = *(ptr);
        sl = *(ptr + 1);
    }
    else
    {
        l = *(ptr + 1);
        sl = *(ptr);
    }
    for (int i = 2; i < n; i++)
    {
        if (*(ptr + i) > l)
        {
            sl = l;
            l = *(ptr + i);
        }
        else if (*(ptr + i) > sl && *(ptr + i) < l)
        {
            sl = *(ptr + i);
        }
    }
    printf("\nLargest number= %d", l);
    printf("\nSecond Largest number= %d", sl);
}