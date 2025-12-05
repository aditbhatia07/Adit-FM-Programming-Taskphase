#include <stdio.h>
//Write a program to determine if the sum of three user-input integers is even or odd as well as if the number is prime or composite.
int main()
{ 
    int a, b, c, sum, i=1;
    printf("Enter three integers: ");
    scanf("%d %d %d", &a, &b, &c);
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
    }
    if (sum = 1 || sum == 0)
    {
        printf("and neither prime nor composite.");
    }
    else
    {
        printf("and prime.");
    }
}
