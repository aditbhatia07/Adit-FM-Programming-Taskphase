#include <stdio.h>
// Create a program that converts seconds into hours, minutes, and remaining seconds.
int main()
{
    int t, h, m, s, v = 0; 
    while (!v)
    {
        printf("Enter time in seconds: ");
        if (scanf("%d", &t) == 1)
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
    h = t / 3600;
    m = (t % 3600) / 60;
    s= t % 60;
    printf("Time: %d hours, %d minutes, %d seconds\n", h, m, s);
}