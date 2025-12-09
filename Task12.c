#include <stdio.h>
#include <string.h>
// Write a program that accepts n products' details and calculates and displays the total value of the inventory (i.e., quantity * price). 
//Find the product with the highest quantity and the product with the highest Price and display their details. 
//Create a structure to represent a product in an inventory. The structure should include:
//Product ID (integer) Product Name (string) Quantity (integer) Price (float)
struct list
{
    int pid;
    char name[100];
    int quant;
    float price;
};
int main()
{
    int n;
    printf("Enter number of products: ");
    scanf("%d", &n);
    struct list pro[n];
    for (int i = 0; i < n; i++)
    {
        printf("\nEnter Product %d ID: ", i+1);
        scanf("%d", &pro[i].pid);
        printf("\nEnter Product %d Name: ", i+1);
        scanf("%s", pro[i].name);
        printf("\nEnter Product %d Quantity: ", i+1);
        scanf("%d", &pro[i].quant);
        printf("\nEnter Product %d Price: ", i+1);
        scanf("%f", &pro[i].price);
    }
    printf("\nProduct Details:\n");
    for (int i = 0; i < n; i++)
    {
        printf("\nProduct %d ID: %d ", i+1, pro[i].pid);
        printf("Product %d Name: %s ", i+1, pro[i].name);
        printf("Product %d Quantity: %d ", i+1, pro[i].quant);
        printf("Product %d Price: %f ", i + 1, pro[i].price);
    }
    float value=0;
    for (int i=0;i<n;i++)
    {
        value=value+(pro[i].quant*pro[i].price);
    }
    printf("\nTotal value of the Inventory is: %f", value);
    int hq=0, hp=0;
    for (int i=0;i<n;i++)
    {
        if (pro[i].quant>pro[hq].quant)
        {
            hq=i;
        }
        if (pro[i].price > pro[hp].price)
        {
            hp = i;
        }
    }
    printf("\nProduct With Highest Quantity:\n");
    printf("\nProduct ID: %d ", pro[hq].pid);
    printf("Product Name: %s ", pro[hq].name);
    printf("Product Quantity: %d ", pro[hq].quant);
    printf("Product Price: %f \n", pro[hq].price);
    printf("\nProduct With Highest Price:\n");
    printf("\nProduct ID: %d ", pro[hp].pid);
    printf("Product Name: %s ", pro[hp].name);
    printf("Product Quantity: %d ", pro[hp].quant);
    printf("Product Price: %f ", pro[hp].price);
}