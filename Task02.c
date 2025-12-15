#include <stdio.h>
#include <math.h>
// Create a program that converts seconds into hours, minutes, and remaining seconds.
int main()
{
    float t, s; 
    int h, m, v=0;
    while (!v)
    {
        printf("Enter time in seconds: ");
        if (scanf("%f", &t) == 1)
        {
            v = 1;
        }
        else
        {
            printf("Please enter valid integers only.\n");
            while (getchar() != '\n');
        }
    }
    h = t / 3600;
    m = fmodf(t, 3600) / 60;
    s= fmodf(t, 60);7;
    printf("Time: %d hours, %d minutes, %.2f seconds\n", h, m, s);
}