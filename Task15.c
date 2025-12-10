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
    int n;
    printf("Enter the index of desired fibbonacci term: ");
    scanf ("%d", &n);
    printf("Desired number is: %d", fib(n));
}