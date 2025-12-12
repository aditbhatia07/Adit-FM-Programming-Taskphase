#include <stdio.h>
// Implement Bubble sort or Selection sort on an array based on the input from the user and on the sorted array perform binary search algorithm to find an element
int main()
{
    int n,in, temp, min, ele, h, l, mid, v = 0;
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
    for (int i = 0; i < n; i++)
    {
        printf("\nEnter element of the array at position %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    printf("\nEntered array is: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    select:
    printf("\nEnter 1 for Bubble Sort\nEnter 2 for Selection Sort\nInput: ");
    scanf("%d", &in);
    if (in == 1)
    {
        for (int i=0;i<n-1;i++)
        {
            for (int j=0;j<n-1;j++)
            {
                if (arr[j]>arr[j+1])
                {
                    temp=arr[j+1];
                    arr[j+1]=arr[j];
                    arr[j]=temp;
                }
            }
        }
        printf ("\nBubble Sort Complete.");
    }
    else if (in == 2)
    {
        for (int i=0; i<n-1;i++)
        {
            min=i;
            for (int j=i+1; j<n; j++)
            {
                if (arr[j]<arr[min])
                {
                    min=j;
                }
            }
            temp=arr[min];
            arr[min]=arr[i];
            arr[i]=temp;
        }
        printf ("\nSelection Sort Complete.");
    }
    else 
    {
        printf("\nInput Invalid");
        goto select;
    }
    printf("\nFinal sorted array is: ");
    for (int i = 0; i < n; i++)
    {
        printf(" %d ", arr[i]);
    }
    printf("\nEnter element to be found: ");
    scanf("%d", &ele);
    l=0,h=n-1;
    while (l<=h)
    {
        mid=(l+h)/2;
        if (arr[mid]==ele)
        {
            printf("%d is the %dth element of the array.", ele, mid+1);
            break;
        }
        else if(ele>arr[mid])
        {
            l=mid+1;
        }
        else 
        {
            h=mid-1;
        }
    }
}