#include <stdio.h>
#include <string.h>
// Write a program that accepts n products' details and calculates and displays the total value of the inventory (i.e., quantity * price).
// Find the product with the highest quantity and the product with the highest Price and display their details.
// Create a structure to represent a product in an inventory. The structure should include:
// Product ID (integer) Product Name (string) Quantity (integer) Price (float)
struct list
{
    int pid;
    char name[100];
    int quant;
    float price;
};
int main()
{
    int n, v = 0;
    while (!v)
    {
        printf("Enter number of products: ");
        if (scanf("%d", &n) == 1 && n >= 1)
        {
            v = 1;
        }
        else
        {
            printf("Please enter a positive integer (1 or above).\n");
            while (getchar() != '\n');
        }
    }
    // included this while loop to handle edge case where input is not a positive integer
    struct list pro[n];
    for (int i = 0; i < n; i++)
    {
        printf("\nProduct %d:\n", i + 1);
        v = 0;
        while (!v)
        {
            printf("Enter Product ID: ");
            if (scanf("%d", &pro[i].pid) == 1)
            {
                int dup = 0;
                for (int j = 0; j < i; j++)
                {
                    if (pro[j].pid == pro[i].pid)
                    {
                        dup = 1;
                        break;
                    }
                }
                if (dup)
                {
                    printf("Product ID already exists. Please enter a unique Product ID.\n");
                }
                else
                {
                    v = 1;
                }
            }
            else
            {
                printf("Please enter a valid integer.\n");
                while (getchar() != '\n');
            }
        }
        printf("Enter Product Name: ");
        scanf("%s", pro[i].name);
        v = 0;
        while (!v)
        {
            printf("Enter Product Quantity: ");
            if (scanf("%d", &pro[i].quant) == 1 && pro[i].quant >= 0)
            {
                v = 1;
            }
            else
            {
                printf("Please enter a non-negative integer.\n");
                while (getchar() != '\n');
            }
        }
        v = 0;
        while (!v)
        {
            printf("Enter Product Price: ");
            if (scanf("%f", &pro[i].price) == 1 && pro[i].price >= 0)
            {
                v = 1;
            }
            else
            {
                printf("Please enter a valid non-negative number.\n");
                while (getchar() != '\n');
            }
        }
    }
    printf("\n\nProduct Details: \n");
    for (int i = 0; i < n; i++)
    {
        printf("\nProduct %d:\n", i + 1);
        printf("  ID: %d\n", pro[i].pid);
        printf("  Name: %s\n", pro[i].name);
        printf("  Quantity: %d\n", pro[i].quant);
        printf("  Price: ₹%.2f\n", pro[i].price);
    }
    float value = 0;
    for (int i = 0; i < n; i++)
    {
        value = value + (pro[i].quant * pro[i].price);
    }
    printf("\n\nProducts List: \n");
    printf("Total Inventory Value: ₹%.2f\n", value);
    int hq = 0, hp = 0;
    for (int i = 0; i < n; i++)
    {
        if (pro[i].quant > pro[hq].quant)
        {
            hq = i;
        }
        if (pro[i].price > pro[hp].price)
        {
            hp = i;
        }
    }
    printf("\nHighest Quantity Product: \n");
    printf("  ID: %d\n", pro[hq].pid);
    printf("  Name: %s\n", pro[hq].name);
    printf("  Quantity: %d\n", pro[hq].quant);
    printf("  Price: ₹%.2f\n", pro[hq].price);
    printf("\nHighest Priced Product:\n");
    printf("  ID: %d\n", pro[hp].pid);
    printf("  Name: %s\n", pro[hp].name);
    printf("  Quantity: %d\n", pro[hp].quant);
    printf("  Price: ₹%.2f\n", pro[hp].price);
}