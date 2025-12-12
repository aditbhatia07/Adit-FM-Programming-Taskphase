#include <stdio.h>
// Create a program to calculate electricity bills based on usage slabs (e.g.if total units are 350 then 0–100 units: ₹5/unit, 101–300 units: ₹8/unit, ₹10/unit for units above 300, then total bill is of 350 units is 2600).
int main()
{ 
    float u, bill;
    int v = 0;
    
    while (!v)
    {
        printf("Enter total units consumed: ");
        if (scanf("%f", &u) == 1)
        {
            v = 1;
        }
        else
        {
            printf("Invalid input! Please enter a valid number.\n");
            while (getchar() != '\n');
        }
    }
    // included this while loop to handle edge case where input is not a number
    if (u <= 100)
    {
        bill = u * 5;
    }
    else if (u <= 300)
    {
        bill = (100 * 5) + ((u - 100) * 8);
    }
    else
    {
        bill = (100 * 5) + (200 * 8) + ((u - 300) * 10);
    }
    printf("Total electricity bill is ₹ %f ", bill);
}