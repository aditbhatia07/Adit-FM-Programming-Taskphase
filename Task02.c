#include <stdio.h>
// Create a program that converts seconds into hours, minutes, and remaining seconds.
int main()
{
    int t, h, m, s;
    printf("Enter time in seconds: ");
    scanf("%d", &t);
    h = t / 3600;
    m = (t % 3600) / 60;
    s= t % 60;
    printf("Time: %d hours, %d minutes, %d seconds\n", h, m, s);
}