#include <stdio.h>
// Create a program to calculate electricity bills based on usage slabs (e.g.if total units are 350 then 0–100 units: ₹5/unit, 101–300 units: ₹8/unit, ₹10/unit for units above 300, then total bill is of 350 units is 2600).
int main()
{ 
    float u, bill;
    printf("Enter total units consumed: ");
    scanf("%f", &u);
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