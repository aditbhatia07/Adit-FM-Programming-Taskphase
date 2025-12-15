#include <stdio.h>
// Write a program to determine if the sum of three user-input integers is even or odd as well as if the number is prime or composite.

int main()
{
    int a, b, c, sum, i;
    int v = 0;
    int p = 1;
    while (!v)
    {
        printf("Enter three integers: ");
        if (scanf("%d %d %d", &a, &b, &c) == 3)
        {
            v = 1;
        }
        else
        {
            printf("Please enter valid integers only.\n");
            while (getchar() != '\n')
                ;
        }
    }
    sum = a + b + c;
    printf("\nSum of integers = %d", sum);
    if ((sum % 2) == 0)
    {
        printf("\nThe Sum is even ");
    }
    else
    {
        printf("\nThe Sum is odd ");
    }
    if (sum < 2)
    {
        printf("and neither prime nor composite.\n");
    }
    else if (sum == 2)
    {
        printf("and prime.\n");
    }
    else
    {
        for (i = 2; i <= sum / 2; i++)
        {
            if (sum % i == 0)
            {
                p = 0; 
                break;
            }
        }

        if (p)
        {
            printf("and prime.\n");
        }
        else
        {
            printf("and composite.\n");
        }
    }

    return 0;
}