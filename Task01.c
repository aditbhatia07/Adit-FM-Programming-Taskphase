#include <stdio.h>
//Write a program to determine if the sum of three user-input integers is even or odd as well as if the number is prime or composite.
int main()
{ 
    int a, b, c, sum, i=1;
    int v = 0;
    
    while (!v)
    {
        printf("Enter three integers: ");
        if (scanf("%d %d %d", &a, &b, &c) == 3)
        {
            v = 1;
        }
        else
        {
            printf("Invalid input! Please enter valid integers only.\n");
            while (getchar() != '\n');
        }
    }
// included this while loop to handle edge case where input is not an integer
    sum = a + b + c;
    printf ("\n Sum of integers=%d", sum);
    if ((sum % 2) == 0)
    {
        printf("\n The Sum is even ", sum);
    }
    else
    {
        printf("\n The Sum is odd ", sum);
    }
    if ((sum/2)>1 && sum!=1)
    {
        for (i; i <=sum/2; i++)
        {
        printf("and composite.");
        break;
        }
// the number's greatest integral divisor is the number divided by 2.
    }
    else if (sum == 1 || sum == 0)
    {
        printf("and neither prime nor composite.");
    }
    else
    {
        printf("and prime.");
    }
}
