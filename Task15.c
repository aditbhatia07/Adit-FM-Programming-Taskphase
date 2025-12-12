#include <stdio.h>
// Create a recursive function to find the nth term of the Fibonacci series.
int fib(int n)
{
    if (n == 0)
    {
        return 0;
    }
    if (n==1)
    {
        return 1;
    }
    return fib(n-2)+fib(n-1);
}
int main()
{
    int n, v = 0;
    while (!v)
    {
        printf("Enter the index of desired fibbonacci term: ");
        if (scanf("%d", &n) == 1 && n >= 0)
        {
            v = 1;
        }
        else
        {
            printf("Please enter a non-negative integer (0 or above).\n");
            while (getchar() != '\n');
        }
    }
    printf("Desired number is: %d", fib(n));
}